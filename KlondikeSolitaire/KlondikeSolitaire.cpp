#include "pch.h"
#include <iostream>

#include "Card.h"
#include "Deck.h"

using namespace std;


Deck::DeckPtr create_deck()
{
	Deck::DeckPtr p_deck = new Deck();

	p_deck->add_card_back(new Card(Rank::RANK_3, Suit::SUIT_DIAMONDS));
	p_deck->add_card_back(new Card(Rank::RANK_4, Suit::SUIT_DIAMONDS));
	p_deck->add_card_back(new Card(Rank::RANK_5, Suit::SUIT_DIAMONDS));
	p_deck->add_card_back(new Card(Rank::RANK_6, Suit::SUIT_DIAMONDS));
	p_deck->add_card_back(new Card(Rank::RANK_7, Suit::SUIT_DIAMONDS));
	p_deck->add_card_back(new Card(Rank::RANK_8, Suit::SUIT_DIAMONDS));
	p_deck->add_card_back(new Card(Rank::RANK_9, Suit::SUIT_DIAMONDS));
	p_deck->add_card_back(new Card(Rank::RANK_10, Suit::SUIT_DIAMONDS));
	p_deck->add_card_back(new Card(Rank::RANK_J, Suit::SUIT_DIAMONDS));
	p_deck->add_card_back(new Card(Rank::RANK_Q, Suit::SUIT_DIAMONDS));
	p_deck->add_card_back(new Card(Rank::RANK_K, Suit::SUIT_DIAMONDS));
	p_deck->add_card_back(new Card(Rank::RANK_A, Suit::SUIT_DIAMONDS));
	p_deck->add_card_back(new Card(Rank::RANK_2, Suit::SUIT_DIAMONDS));


	p_deck->add_card_back(new Card(Rank::RANK_3, Suit::SUIT_CLUBS));
	p_deck->add_card_back(new Card(Rank::RANK_4, Suit::SUIT_CLUBS));
	p_deck->add_card_back(new Card(Rank::RANK_5, Suit::SUIT_CLUBS));
	p_deck->add_card_back(new Card(Rank::RANK_6, Suit::SUIT_CLUBS));
	p_deck->add_card_back(new Card(Rank::RANK_7, Suit::SUIT_CLUBS));
	p_deck->add_card_back(new Card(Rank::RANK_8, Suit::SUIT_CLUBS));
	p_deck->add_card_back(new Card(Rank::RANK_9, Suit::SUIT_CLUBS));
	p_deck->add_card_back(new Card(Rank::RANK_10, Suit::SUIT_CLUBS));
	p_deck->add_card_back(new Card(Rank::RANK_J, Suit::SUIT_CLUBS));
	p_deck->add_card_back(new Card(Rank::RANK_Q, Suit::SUIT_CLUBS));
	p_deck->add_card_back(new Card(Rank::RANK_K, Suit::SUIT_CLUBS));
	p_deck->add_card_back(new Card(Rank::RANK_A, Suit::SUIT_CLUBS));
	p_deck->add_card_back(new Card(Rank::RANK_2, Suit::SUIT_CLUBS));

	p_deck->add_card_back(new Card(Rank::RANK_3, Suit::SUIT_HEARTS));
	p_deck->add_card_back(new Card(Rank::RANK_4, Suit::SUIT_HEARTS));
	p_deck->add_card_back(new Card(Rank::RANK_5, Suit::SUIT_HEARTS));
	p_deck->add_card_back(new Card(Rank::RANK_6, Suit::SUIT_HEARTS));
	p_deck->add_card_back(new Card(Rank::RANK_7, Suit::SUIT_HEARTS));
	p_deck->add_card_back(new Card(Rank::RANK_8, Suit::SUIT_HEARTS));
	p_deck->add_card_back(new Card(Rank::RANK_9, Suit::SUIT_HEARTS));
	p_deck->add_card_back(new Card(Rank::RANK_10, Suit::SUIT_HEARTS));
	p_deck->add_card_back(new Card(Rank::RANK_J, Suit::SUIT_HEARTS));
	p_deck->add_card_back(new Card(Rank::RANK_Q, Suit::SUIT_HEARTS));
	p_deck->add_card_back(new Card(Rank::RANK_K, Suit::SUIT_HEARTS));
	p_deck->add_card_back(new Card(Rank::RANK_A, Suit::SUIT_HEARTS));
	p_deck->add_card_back(new Card(Rank::RANK_2, Suit::SUIT_HEARTS));

	p_deck->add_card_back(new Card(Rank::RANK_3, Suit::SUIT_SPADES));
	p_deck->add_card_back(new Card(Rank::RANK_4, Suit::SUIT_SPADES));
	p_deck->add_card_back(new Card(Rank::RANK_5, Suit::SUIT_SPADES));
	p_deck->add_card_back(new Card(Rank::RANK_6, Suit::SUIT_SPADES));
	p_deck->add_card_back(new Card(Rank::RANK_7, Suit::SUIT_SPADES));
	p_deck->add_card_back(new Card(Rank::RANK_8, Suit::SUIT_SPADES));
	p_deck->add_card_back(new Card(Rank::RANK_9, Suit::SUIT_SPADES));
	p_deck->add_card_back(new Card(Rank::RANK_10, Suit::SUIT_SPADES));
	p_deck->add_card_back(new Card(Rank::RANK_J, Suit::SUIT_SPADES));
	p_deck->add_card_back(new Card(Rank::RANK_Q, Suit::SUIT_SPADES));
	p_deck->add_card_back(new Card(Rank::RANK_K, Suit::SUIT_SPADES));
	p_deck->add_card_back(new Card(Rank::RANK_A, Suit::SUIT_SPADES));
	p_deck->add_card_back(new Card(Rank::RANK_2, Suit::SUIT_SPADES));

	return p_deck;
}

int main()
{
	cout << "Welcome to Klondike solitaire! Enjoy!" << endl;

	// Create deck and shuffle it
	Deck::DeckPtr p_deck = create_deck();

	cout << "Before shuffle" << endl;
	cout << p_deck->to_string() << endl;

	p_deck->shuffle();

	cout << "After shuffle" << endl;
	cout << p_deck->to_string() << endl;

	delete p_deck;	
}