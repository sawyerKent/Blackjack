//
// Created by Owner on 7/31/2021.
//

#include "Hand.h"

Hand::Hand()
{
    m_Cards.reserve(7);
}

Hand::~Hand()
{
    Clear();
}

void Hand::Add(Card* pCard)
{
    m_Cards.push_back(pCard);
}

void Hand::Clear()
{
    // itereate through vector, freeing all memory on the heap
    std::vector<Card*>::iterator iter;
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        delete* iter;
        *iter = 0;
    }
    // clear vector of pointers
    m_Cards.clear();
}

int Hand::GetTotal() const
{
    // if no cards in hand, return 0
    if (m_Cards.empty())
    {
        return 0;
    }

    // if a first card has a value of 0, then card is face down; return 0
    if (m_Cards[0]->GetValue() == 0)
    {
        return 0;
    }

    // add up card values, treat each as 1
    int total = 0;
    std::vector<Card*>::const_iterator iter;
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        total += (*iter)->GetValue();
    }

    // determine if hand continues an ace
    bool containsAce = false;
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        if ((*iter)->GetValue() == Card::ACE)
        {
            containsAce = true;
        }
    }

    // if hand contains ace and total is low enough, treat ace as 11
    if (containsAce && total <= 11)
    {
        // add only 10 since we've already added 1 for the ace
        total += 10;
    }

    return total;
}