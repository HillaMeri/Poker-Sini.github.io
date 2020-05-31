/*
 * Controller.h
 *
 *  Created on: Apr 28, 2020
 *      Author: hilla
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include "Deck.h"


class Controller
{

public:
	Deck deck_of_the_game;
	Controller();
	virtual ~Controller();
	void divide_cards();

};

#endif /* CONTROLLER_H_ */
