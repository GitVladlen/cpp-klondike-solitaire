#pragma once

#include "Card.h"

class Deck
{
private:
	Card::CardPtrList m_cards;
public:
	Deck();
	~Deck();

	void push_card_front(Card::CardPtr p_card);
	void push_card_back(Card::CardPtr p_card);

	Card::CardPtr pop_card_front();
	Card::CardPtr pop_card_back();

	void destroy_cards();

	void shuffle();

	std::string to_string();

	typedef Deck * DeckPtr;
};

