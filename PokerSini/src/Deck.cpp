/*
 * Deck.cpp
 *
 *  Created on: Apr 28, 2020
 *      Author: hilla
 */

#include "Deck.h"

/*We create deck for 52 cards, for each card we need two symbols:
1. number of card(1-13)
2. type of card (symbol)
3. shuffle the cards in the deck
*/
Deck::Deck()
{
	for (int i = 0; i < number_of_types; i++)
	{
		for (int j = 1; j <= number_of_numbers; j++)
		{
			char c = (char)j;
			Card new_card (c, i);
			deck.push_back(new_card);
		}
	}
	/*
	for(int i=0; i<52;i++)
	{
		cout<<"name of "<<i+1<<" "<<(int)deck[i].getName()<<" "<<
				"type"<<deck[i].getType()<<endl;
	}
*/

	cout<<(int)deck[51].getName()<<" "<<deck[51].getType()<<endl;
		cout<<(int)deck[22].getName()<<" "<<deck[22].getType()<<endl;
		cout<<(int)deck[10].getName()<<" "<<deck[10].getType()<<endl;
	srand(unsigned(time(0)));
	random_shuffle(deck.begin(),deck.end());
	/*for(int i=0; i<52;i++)
		{
			cout<<"name of "<<i+1<<" "<<(int)deck[i].getName()<<" "<<
					"type"<<deck[i].getType()<<endl;
		}
		*/
	cout<<(int)deck[51].getName()<<" "<<deck[51].getType()<<endl;
			cout<<(int)deck[22].getName()<<" "<<deck[22].getType()<<endl;
			cout<<(int)deck[10].getName()<<" "<<deck[10].getType()<<endl;
}
Deck::Deck(const Deck&obj)
{
	deck = obj.deck;
}
const vector<Card>& Deck::getdeck() const {
	return deck;
}

void Deck::setdeck(const vector<Card> &deckOfTheGame) {
	deck = deckOfTheGame;
}

Card Deck::pull_off()
{
	char c_n = deck.end()->getName();
	int c_t = deck.end()->getType();
	Card new_card(c_n,c_t);
	deck.pop_back();
	return (new_card);
}
Deck::~Deck() {
	// TODO Auto-generated destructor stub
}

