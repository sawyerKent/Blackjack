//
// Created by Owner on 7/31/2021.
//

#ifndef BLACKJACK_21_CARD_H
#define BLACKJACK_21_CARD_H

#include <iostream>

class Card {
    // overloading << operator so can send Card object to standard output
    friend std::ostream& operator<< (std::ostream& os, const Card& aCard);

public:
    enum rank {
        ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
        JACK, QUEEN, KING
    };
    enum suit { CLUBS, DIAMONDS, HEARTS, SPADES };

    Card(rank r = ACE, suit s = SPADES, bool ifu = true);

    // returns the value of a card, 1-11
    int GetValue() const;

    // flips a card; if face up, becomes face down and vice versa
    void Flip();

private:
    rank m_Rank;
    suit m_Suit;
    bool m_IsFaceUp;
};


#endif //BLACKJACK_21_CARD_H
