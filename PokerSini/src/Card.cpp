/*
 * Card.cpp
 *
 *  Created on: Apr 28, 2020
 *      Author: hilla
 */

#include "Card.h"
Card::Card()
{
	name = ' ';
	type = -1;
}
Card::Card(char name_c, int type_c)
{
	name = name_c;
	type = type_c;
}
Card::Card(const Card& obj)
{
	name = obj.name;
	type = obj.type;

}

Card &Card::operator=(const Card &rhs)
{
    cout << "Using copy assignment" << endl;
    name = rhs.getName();
    type = rhs.getType();
    return *this;
}

char Card::getName() const
{
	return name;
}

void Card::setName(char name)
{
	this->name = name;
}

int Card::getType() const {
	return type;
}

void Card::setType(int type) {
	this->type = type;
}

Card::~Card() {
	// TODO Auto-generated destructor stub
}

