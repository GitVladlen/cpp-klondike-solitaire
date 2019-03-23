#pragma once

#include "Card.h"

class Deck
{
private:
	Card::CardPtrList m_cards;
public:
	Deck();
	~Deck();

	void add_card_front(Card::CardPtr p_card);
	void add_card_back(Card::CardPtr p_card);

	void destroy_cards();

	void shuffle();

	std::string to_string();

	typedef Deck * DeckPtr;
};

