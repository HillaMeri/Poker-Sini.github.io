/*
 * Player.h
 *
 *  Created on: Apr 28, 2020
 *      Author: hilla
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include "Hand.h"

class Player
{
	string name;
	vector<Hand> five_hands;
	int victory;
public:
	Player();
	Player(string p_name);
	Player(const Player& obj);
	virtual ~Player();
	string getName() const;
	void setName(const string &name);
	int getVictory() const;
	void setVictory(int victory);
	const vector<Hand>& getFiveHands() const;
	void setFiveHands(const vector<Hand> &fiveHands);
	void add_card_to_some_hand(int number_of_hand, Card new_card);
	void print_player_hands()const;
};

#endif /* PLAYER_H_ */
