#pragma once

#include "Card.h"

class Deck
{
private:
	Card::CardPtrList m_cards;
public:
	Deck();
	~Deck();

	void create_card(int rank, int suit);
	void destroy_cards();

	std::string to_string();
};

