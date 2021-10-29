//
// Created by Owner on 7/31/2021.
//

#ifndef BLACKJACK_21_GENERIC_PLAYER_H
#define BLACKJACK_21_GENERIC_PLAYER_H

#include <string>
#include "Hand.h"

class GenericPlayer : public Hand {
    friend std::ostream& operator<< (std::ostream& os, const GenericPlayer& aGenericPlayer);

public:
    GenericPlayer(const std::string& name = "");

    virtual ~GenericPlayer();

    // indicates whether or not generic player wants to keep hitting
    virtual bool IsHitting() const = 0;

    // returns whether generic player has busted - has a total greater than 21
    bool IsBusted() const;

    // announces that the generic player busts
    void Bust() const;

protected:
    std::string m_Name;
};


#endif //BLACKJACK_21_GENERIC_PLAYER_H
