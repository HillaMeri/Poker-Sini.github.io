/*
 * Hand.h
 *
 *  Created on: Apr 28, 2020
 *      Author: hilla
 */

#ifndef HAND_H_
#define HAND_H_
#include "Card.h"

class Hand
{
private:
	vector<Card> hand_collection;
public:
	Hand();
	Hand(const Hand&obj);
	virtual ~Hand();
	const vector<Card>& getHandCollection() const;
	void setHandCollection(const vector<Card> &handCollection);
	void print_hand() const;
	void add_card(char number, int type);
	void add_card(Card new_card);
};

#endif /* HAND_H_ */
