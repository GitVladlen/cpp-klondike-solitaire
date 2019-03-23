#include "pch.h"
#include "Deck.h"

#include <sstream>
#include <algorithm>
#include <vector>

Deck::Deck()
{
}


Deck::~Deck()
{
	destroy_cards();
}

void Deck::add_card_front(Card::CardPtr p_card)
{
	m_cards.push_front(p_card);
}

void Deck::add_card_back(Card::CardPtr p_card)
{
	m_cards.push_back(p_card);
}

void Deck::destroy_cards()
{
	for (Card::CardPtr p_card : m_cards)
		delete p_card;
	m_cards.clear();
}

void Deck::shuffle()
{
	std::vector<Card::CardPtr> buf(m_cards.begin(), m_cards.end());
	std::random_shuffle(buf.begin(), buf.end());
	m_cards.assign(buf.begin(), buf.end());
}

std::string Deck::to_string()
{
	std::ostringstream buffer;
	buffer << "Deck:";

	for (Card::CardPtr p_card : m_cards)
		buffer << "\n" << p_card->to_string();

	return buffer.str();
}
