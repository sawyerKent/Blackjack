//
// Created by Owner on 7/31/2021.
//

#ifndef BLACKJACK_21_HOUSE_H
#define BLACKJACK_21_HOUSE_H

#include "GenericPlayer.h"

class House : public GenericPlayer {
public:
    House(const std::string& name = "House");

    virtual ~House();

    // indicates whether house is hitting will always hit on 16 or less
    virtual bool IsHitting() const;

    // flips over first card
    void FlipFirstCard();
};


#endif //BLACKJACK_21_HOUSE_H
