/*
 * Deck.h
 *
 *  Created on: Apr 28, 2020
 *      Author: hilla
 */

#ifndef DECK_H_
#define DECK_H_
#include "Card.h"

class Deck
{
private:
	vector <Card> deck;
	static constexpr int number_of_numbers = 13;
	static constexpr int number_of_types = 4;
public:
	Deck();
	Deck(const Deck& obj);
	~Deck();
	const vector<Card>& getdeck() const;
	void setdeck(const vector<Card> &deck);
	Card pull_off();
};

#endif /* DECK_H_ */
