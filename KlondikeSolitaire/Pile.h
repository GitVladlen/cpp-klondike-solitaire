#pragma once
#include "Card.h"

#include <vector>

typedef std::vector<Card *> CardPtrList;

class Pile
{
private:
	Card::CardPtrList m_cards;
public:
	Pile();
	~Pile();

	void add_cards_front(Card::CardPtrList cards);
	void add_cards_back(Card::CardPtrList cards);
};

