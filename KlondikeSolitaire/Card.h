#pragma once

#include <string>
#include <list>

enum Suit {
	SUIT_DIAMONDS,
	SUIT_CLUBS,
	SUIT_HEARTS,
	SUIT_SPADES
};

enum Rank {
	RANK_3,	
	RANK_4,	
	RANK_5,	
	RANK_6,	
	RANK_7,	
	RANK_8,	
	RANK_9,	
	RANK_10,	
	RANK_J,	
	RANK_Q,	
	RANK_K,	
	RANK_A,	
	RANK_2,	
};

class Card
{
private:
	int m_rank;
	int m_suit;
	bool m_is_turned;

private:
	Card();

public:
	Card(int rank, int suit, bool is_turned=false);
	~Card();

	int get_rank() const;
	int get_suit() const;

	bool is_turned() const;
	void turn();

	std::string to_string();

	typedef Card* CardPtr;
	typedef std::list<CardPtr> CardPtrList;
};

