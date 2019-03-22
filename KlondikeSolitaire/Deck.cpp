#include "pch.h"
#include "Deck.h"

#include <sstream>
#include <algorithm>

Deck::Deck()
{
}


Deck::~Deck()
{
	destroy_cards();
}

void Deck::create_card(int rank, int suit)
{
	Card * card_ptr = new Card(rank, suit);
	m_cards.push_back(card_ptr);
}

void Deck::destroy_cards()
{
	for (Card::CardPtrList::iterator it = m_cards.begin(); it != m_cards.end(); ++it)
		delete *it;
}

void Deck::shuffle()
{
	std::random_shuffle(m_cards.begin(), m_cards.end());
}

std::string Deck::to_string()
{
	std::ostringstream buffer;
	buffer << "Deck:";
	for (Card::CardPtrList::iterator it = m_cards.begin(); it != m_cards.end(); ++it)
		buffer << "\n" << (*it)->to_string();
	return buffer.str();
}
