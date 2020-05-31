/*
 * Card.h
 *
 *  Created on: Apr 28, 2020
 *      Author: hilla
 */
#ifndef CARD_H_
#define CARD_H_
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <iterator>
using namespace std;


class Card
{
private:

	char name;
	int type;
public:
	Card();
	Card(char name_c, int type_c);
	Card(const Card& obj); //CC
	~Card();
    Card &operator=(const Card &rhs); // Copy assignment
	char getName() const;
	void setName(char name);
	int getType() const;
	void setType(int type);
};

#endif /* CARD_H_ */
