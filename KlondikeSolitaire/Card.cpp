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
	buffer << "<Card " << m_rank << " " << m_suit << ">";
	return buffer.str();
}
