// KlondikeSolitaire.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

#include "Card.h"
#include "Deck.h"

using namespace std;

int main()
{
	cout << "Welcome to Klondike solitaire! Enjoy!" << endl;

	Deck deck = Deck();

	deck.create_card(Rank::RANK_3, Suit::SUIT_DIAMONDS);
	deck.create_card(Rank::RANK_4, Suit::SUIT_DIAMONDS);
	deck.create_card(Rank::RANK_5, Suit::SUIT_DIAMONDS);
	deck.create_card(Rank::RANK_6, Suit::SUIT_DIAMONDS);
	deck.create_card(Rank::RANK_7, Suit::SUIT_DIAMONDS);
	deck.create_card(Rank::RANK_8, Suit::SUIT_DIAMONDS);
	deck.create_card(Rank::RANK_9, Suit::SUIT_DIAMONDS);
	deck.create_card(Rank::RANK_10, Suit::SUIT_DIAMONDS);
	deck.create_card(Rank::RANK_J, Suit::SUIT_DIAMONDS);
	deck.create_card(Rank::RANK_Q, Suit::SUIT_DIAMONDS);
	deck.create_card(Rank::RANK_K, Suit::SUIT_DIAMONDS);
	deck.create_card(Rank::RANK_A, Suit::SUIT_DIAMONDS);
	deck.create_card(Rank::RANK_2, Suit::SUIT_DIAMONDS);


	deck.create_card(Rank::RANK_3, Suit::SUIT_CLUBS);
	deck.create_card(Rank::RANK_4, Suit::SUIT_CLUBS);
	deck.create_card(Rank::RANK_5, Suit::SUIT_CLUBS);
	deck.create_card(Rank::RANK_6, Suit::SUIT_CLUBS);
	deck.create_card(Rank::RANK_7, Suit::SUIT_CLUBS);
	deck.create_card(Rank::RANK_8, Suit::SUIT_CLUBS);
	deck.create_card(Rank::RANK_9, Suit::SUIT_CLUBS);
	deck.create_card(Rank::RANK_10, Suit::SUIT_CLUBS);
	deck.create_card(Rank::RANK_J, Suit::SUIT_CLUBS);
	deck.create_card(Rank::RANK_Q, Suit::SUIT_CLUBS);
	deck.create_card(Rank::RANK_K, Suit::SUIT_CLUBS);
	deck.create_card(Rank::RANK_A, Suit::SUIT_CLUBS);
	deck.create_card(Rank::RANK_2, Suit::SUIT_CLUBS);

	deck.create_card(Rank::RANK_3, Suit::SUIT_HEARTS);
	deck.create_card(Rank::RANK_4, Suit::SUIT_HEARTS);
	deck.create_card(Rank::RANK_5, Suit::SUIT_HEARTS);
	deck.create_card(Rank::RANK_6, Suit::SUIT_HEARTS);
	deck.create_card(Rank::RANK_7, Suit::SUIT_HEARTS);
	deck.create_card(Rank::RANK_8, Suit::SUIT_HEARTS);
	deck.create_card(Rank::RANK_9, Suit::SUIT_HEARTS);
	deck.create_card(Rank::RANK_10, Suit::SUIT_HEARTS);
	deck.create_card(Rank::RANK_J, Suit::SUIT_HEARTS);
	deck.create_card(Rank::RANK_Q, Suit::SUIT_HEARTS);
	deck.create_card(Rank::RANK_K, Suit::SUIT_HEARTS);
	deck.create_card(Rank::RANK_A, Suit::SUIT_HEARTS);
	deck.create_card(Rank::RANK_2, Suit::SUIT_HEARTS);

	deck.create_card(Rank::RANK_3, Suit::SUIT_SPADES);
	deck.create_card(Rank::RANK_4, Suit::SUIT_SPADES);
	deck.create_card(Rank::RANK_5, Suit::SUIT_SPADES);
	deck.create_card(Rank::RANK_6, Suit::SUIT_SPADES);
	deck.create_card(Rank::RANK_7, Suit::SUIT_SPADES);
	deck.create_card(Rank::RANK_8, Suit::SUIT_SPADES);
	deck.create_card(Rank::RANK_9, Suit::SUIT_SPADES);
	deck.create_card(Rank::RANK_10, Suit::SUIT_SPADES);
	deck.create_card(Rank::RANK_J, Suit::SUIT_SPADES);
	deck.create_card(Rank::RANK_Q, Suit::SUIT_SPADES);
	deck.create_card(Rank::RANK_K, Suit::SUIT_SPADES);
	deck.create_card(Rank::RANK_A, Suit::SUIT_SPADES);
	deck.create_card(Rank::RANK_2, Suit::SUIT_SPADES);

	cout << deck.to_string() << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
