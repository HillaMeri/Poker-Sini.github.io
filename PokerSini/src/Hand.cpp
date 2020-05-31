/*
 * Hand.cpp
 *
 *  Created on: Apr 28, 2020
 *      Author: hilla
 */

#include "Hand.h"

Hand::Hand()
{
	// TODO Auto-generated constructor stub
}

Hand::Hand(const Hand& obj)
{
	hand_collection = obj.hand_collection;
}

const vector<Card>& Hand::getHandCollection() const {
	return hand_collection;
}

void Hand::setHandCollection(const vector<Card> &handCollection) {
	hand_collection = handCollection;
}

Hand::~Hand() {
	// TODO Auto-generated destructor stub
}

void Hand::add_card(char number, int type)
{
	Card c(number, type);
	hand_collection.push_back(c);
}
void Hand::add_card(Card new_card)
{
	hand_collection.push_back(new_card);
}

void Hand::print_hand() const
{
	for(unsigned int i=0; i<hand_collection.size();i++)
	{
		cout<<"Card number "<<i<<" Name: "<<
				(int)hand_collection[i].getName()<<
				"Type: "<<hand_collection[i].getType()<<endl;
	}
}
