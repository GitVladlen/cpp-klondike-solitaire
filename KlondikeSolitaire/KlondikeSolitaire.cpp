#include "pch.h"

#include <iostream>
#include <ctime>

#include "Card.h"
#include "Deck.h"

using namespace std;


Deck::DeckPtr create_deck()
{
	Deck::DeckPtr p_deck = new Deck();

	p_deck->push_card_back(new Card(Rank::RANK_3, Suit::SUIT_DIAMONDS));
	p_deck->push_card_back(new Card(Rank::RANK_4, Suit::SUIT_DIAMONDS));
	p_deck->push_card_back(new Card(Rank::RANK_5, Suit::SUIT_DIAMONDS));
	p_deck->push_card_back(new Card(Rank::RANK_6, Suit::SUIT_DIAMONDS));
	p_deck->push_card_back(new Card(Rank::RANK_7, Suit::SUIT_DIAMONDS));
	p_deck->push_card_back(new Card(Rank::RANK_8, Suit::SUIT_DIAMONDS));
	p_deck->push_card_back(new Card(Rank::RANK_9, Suit::SUIT_DIAMONDS));
	p_deck->push_card_back(new Card(Rank::RANK_10, Suit::SUIT_DIAMONDS));
	p_deck->push_card_back(new Card(Rank::RANK_J, Suit::SUIT_DIAMONDS));
	p_deck->push_card_back(new Card(Rank::RANK_Q, Suit::SUIT_DIAMONDS));
	p_deck->push_card_back(new Card(Rank::RANK_K, Suit::SUIT_DIAMONDS));
	p_deck->push_card_back(new Card(Rank::RANK_A, Suit::SUIT_DIAMONDS));
	p_deck->push_card_back(new Card(Rank::RANK_2, Suit::SUIT_DIAMONDS));


	p_deck->push_card_back(new Card(Rank::RANK_3, Suit::SUIT_CLUBS));
	p_deck->push_card_back(new Card(Rank::RANK_4, Suit::SUIT_CLUBS));
	p_deck->push_card_back(new Card(Rank::RANK_5, Suit::SUIT_CLUBS));
	p_deck->push_card_back(new Card(Rank::RANK_6, Suit::SUIT_CLUBS));
	p_deck->push_card_back(new Card(Rank::RANK_7, Suit::SUIT_CLUBS));
	p_deck->push_card_back(new Card(Rank::RANK_8, Suit::SUIT_CLUBS));
	p_deck->push_card_back(new Card(Rank::RANK_9, Suit::SUIT_CLUBS));
	p_deck->push_card_back(new Card(Rank::RANK_10, Suit::SUIT_CLUBS));
	p_deck->push_card_back(new Card(Rank::RANK_J, Suit::SUIT_CLUBS));
	p_deck->push_card_back(new Card(Rank::RANK_Q, Suit::SUIT_CLUBS));
	p_deck->push_card_back(new Card(Rank::RANK_K, Suit::SUIT_CLUBS));
	p_deck->push_card_back(new Card(Rank::RANK_A, Suit::SUIT_CLUBS));
	p_deck->push_card_back(new Card(Rank::RANK_2, Suit::SUIT_CLUBS));

	p_deck->push_card_back(new Card(Rank::RANK_3, Suit::SUIT_HEARTS));
	p_deck->push_card_back(new Card(Rank::RANK_4, Suit::SUIT_HEARTS));
	p_deck->push_card_back(new Card(Rank::RANK_5, Suit::SUIT_HEARTS));
	p_deck->push_card_back(new Card(Rank::RANK_6, Suit::SUIT_HEARTS));
	p_deck->push_card_back(new Card(Rank::RANK_7, Suit::SUIT_HEARTS));
	p_deck->push_card_back(new Card(Rank::RANK_8, Suit::SUIT_HEARTS));
	p_deck->push_card_back(new Card(Rank::RANK_9, Suit::SUIT_HEARTS));
	p_deck->push_card_back(new Card(Rank::RANK_10, Suit::SUIT_HEARTS));
	p_deck->push_card_back(new Card(Rank::RANK_J, Suit::SUIT_HEARTS));
	p_deck->push_card_back(new Card(Rank::RANK_Q, Suit::SUIT_HEARTS));
	p_deck->push_card_back(new Card(Rank::RANK_K, Suit::SUIT_HEARTS));
	p_deck->push_card_back(new Card(Rank::RANK_A, Suit::SUIT_HEARTS));
	p_deck->push_card_back(new Card(Rank::RANK_2, Suit::SUIT_HEARTS));

	p_deck->push_card_back(new Card(Rank::RANK_3, Suit::SUIT_SPADES));
	p_deck->push_card_back(new Card(Rank::RANK_4, Suit::SUIT_SPADES));
	p_deck->push_card_back(new Card(Rank::RANK_5, Suit::SUIT_SPADES));
	p_deck->push_card_back(new Card(Rank::RANK_6, Suit::SUIT_SPADES));
	p_deck->push_card_back(new Card(Rank::RANK_7, Suit::SUIT_SPADES));
	p_deck->push_card_back(new Card(Rank::RANK_8, Suit::SUIT_SPADES));
	p_deck->push_card_back(new Card(Rank::RANK_9, Suit::SUIT_SPADES));
	p_deck->push_card_back(new Card(Rank::RANK_10, Suit::SUIT_SPADES));
	p_deck->push_card_back(new Card(Rank::RANK_J, Suit::SUIT_SPADES));
	p_deck->push_card_back(new Card(Rank::RANK_Q, Suit::SUIT_SPADES));
	p_deck->push_card_back(new Card(Rank::RANK_K, Suit::SUIT_SPADES));
	p_deck->push_card_back(new Card(Rank::RANK_A, Suit::SUIT_SPADES));
	p_deck->push_card_back(new Card(Rank::RANK_2, Suit::SUIT_SPADES));

	return p_deck;
}

int main()
{
	// init seed for random
	std::srand(unsigned(std::time(0)));

	// print greetings
	cout << "Welcome to Klondike solitaire! Enjoy!" << endl;

	// create deck and shuffle
	Deck::DeckPtr p_deck = create_deck();
	p_deck->shuffle();

	// turn up front card
	Card::CardPtr p_card = p_deck->pop_card_front();
	p_card->turn();
	p_deck->push_card_front(p_card);

	// print deck string
	cout << p_deck->str() << endl;

	// print deck reprasentation
	cout << p_deck->repr() << endl;

	// clean up
	delete p_deck;	
}