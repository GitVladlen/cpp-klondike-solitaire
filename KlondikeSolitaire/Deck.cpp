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

void Deck::push_card_front(Card::CardPtr p_card)
{
	m_cards.push_front(p_card);
}

void Deck::push_card_back(Card::CardPtr p_card)
{
	m_cards.push_back(p_card);
}

Card::CardPtr Deck::pop_card_front()
{
	Card::CardPtr p_front = m_cards.front();
	m_cards.pop_front();

	return p_front;
}

Card::CardPtr Deck::pop_card_back()
{
	Card::CardPtr p_back = m_cards.back();
	m_cards.pop_back();
	return p_back;
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
