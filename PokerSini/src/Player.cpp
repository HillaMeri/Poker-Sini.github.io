/*
 * Player.cpp
 *
 *  Created on: Apr 28, 2020
 *      Author: hilla
 */

#include "Player.h"


Player::Player():name{"Random"},victory{0}
{
}

Player::Player(string p_name):victory{0}
{
	name = p_name;
}

Player::Player(const Player&obj)
{
	name = obj.name;
	victory = obj.victory;
	five_hands = obj.five_hands;
}

string Player::getName() const
{
	return name;
}

void Player::setName(const string &name) {
	this->name = name;
}

int Player::getVictory() const {
	return victory;
}


void Player::setVictory(int victory) {
	this->victory = victory;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

const vector<Hand>& Player::getFiveHands() const {
	return five_hands;
}

void Player::setFiveHands(const vector<Hand> &fiveHands) {
	five_hands = fiveHands;
}


//This function get card and number of hand and put the card in the relavent hand
// TODO this function need to be boolean, if the hand is already full its return false
void Player::add_card_to_some_hand(int number_of_hand, Card new_card)
{
	five_hands[number_of_hand].add_card(new_card);

}


void Player::print_player_hands()const
{
	for(unsigned int i=0; i<five_hands.size();i++)
	{
		cout<<"Hand number: " << i;
		five_hands[i].print_hand();
		cout<<endl;
	}
}
