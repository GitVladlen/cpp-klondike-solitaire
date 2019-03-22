#include "pch.h"
#include "Card.h"

#include <sstream>


Card::Card()
{
}


Card::Card(int rank, int suit)
	: m_rank(rank), m_suit(suit)
{
}

Card::~Card()
{
}

int Card::get_rank() const
{
	return m_rank;
}

int Card::get_suit() const
{
	return m_suit;
}

std::string Card::to_string()
{
	std::ostringstream buffer;

	buffer << "<Card: ";

	if (m_suit == Suit::SUIT_DIAMONDS)
		buffer << "D";
	else if (m_suit == Suit::SUIT_CLUBS)
		buffer << "C";
	else if (m_suit == Suit::SUIT_HEARTS)
		buffer << "H";
	else if (m_suit == Suit::SUIT_SPADES)
		buffer << "S";

	buffer << "-";

	if (m_rank <= Rank::RANK_10)
		buffer << m_rank + 3;
	else if (m_rank == Rank::RANK_J)
		buffer << "J";
	else if (m_rank == Rank::RANK_Q)
		buffer << "Q";
	else if (m_rank == Rank::RANK_K)
		buffer << "K";
	else if (m_rank == Rank::RANK_A)
		buffer << "A";
	else if (m_rank == Rank::RANK_2)
		buffer << "2";

	buffer << ">";
	return buffer.str();
}
