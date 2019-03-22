#pragma once
#include "Card.h"

#include <vector>

typedef std::vector<Card *> CardPtrList;

class Pile
{
private:
	CardPtrList m_cards;
public:
	Pile();
	~Pile();

	void add_cards_front(CardPtrList cards);
	void add_cards_back(CardPtrList cards);
};

