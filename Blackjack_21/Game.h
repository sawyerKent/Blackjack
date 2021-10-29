//
// Created by Owner on 7/31/2021.
//

#ifndef BLACKJACK_21_GAME_H
#define BLACKJACK_21_GAME_H

#include <vector>
#include <ctime>
#include "House.h"
#include "Deck.h"
#include "Player.h"

class Game {
public:
    Game(const std::vector<std::string>& names);

    ~Game();

    // plays the game of blackjack
    void Play();

private:
    Deck m_Deck;
    House m_House;
    std::vector<Player> m_Players;
};


#endif //BLACKJACK_21_GAME_H
