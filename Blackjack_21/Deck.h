//
// Created by Owner on 7/31/2021.
//

#ifndef BLACKJACK_21_DECK_H
#define BLACKJACK_21_DECK_H

#include "GenericPlayer.h"
#include <random>

class Deck : public Hand {
public:
    Deck();

    virtual ~Deck();

    // create a standard deck of 52 cards
    void Populate();

    // shuffle cards
    void Shuffle();

    // deal one card to a hand
    void Deal(Hand& aHand);

    // give additional cards to a generic player
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};


#endif //BLACKJACK_21_DECK_H
