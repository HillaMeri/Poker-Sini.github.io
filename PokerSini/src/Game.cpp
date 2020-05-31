/*
 * Game.cpp
 *
 *  Created on: Apr 28, 2020
 *      Author: hilla
 */

#include "Game.h"
Game::Game()
{
	counter_round = 0;
}

Game::Game(Player p1, Player p2)
{
	player1.setName(p1.getName());
	player2.setName(p2.getName());
	counter_round = 0;
}

//each player get card from the end of the deck
//the deck delete the last element and insert the card
//to the hands of the players in Chronological order
/*
void Game::start_game()
{
	counter_round = 1;
	for(int i=0; i<number_of_hands;i++)
	{
		Card c1;
		c1 = pull_off_card();

		player1.add_card_to_some_hand(i,c1);
		//player2.add_card_to_some_hand(i,pull_off_card());
	}

}
*/
void Game::start_game()
{
	counter_round++;
}
int Game::getCounterRound() const {
	return counter_round;
}

void Game::setCounterRound(int counterRound) {
	counter_round = counterRound;
}

const Deck& Game::getDeckOfTheGame() const {
	return deck_of_the_game;
}

void Game::setDeckOfTheGame(const Deck &deckOfTheGame) {
	deck_of_the_game = deckOfTheGame;
}

const Player& Game::getPlayer1() const {
	return player1;
}

void Game::setPlayer1(const Player &player1) {
	this->player1 = player1;
}

const Player& Game::getPlayer2() const {
	return player2;
}

void Game::setPlayer2(const Player &player2) {
	this->player2 = player2;
}

Card Game::pull_off_card()
{
	cout<<"number of cards "<<deck_of_the_game.getdeck().size();
	Card new_card;
	new_card = deck_of_the_game.pull_off();
	cout<<"number of cards "<<deck_of_the_game.getdeck().size();
	return new_card;
}

Game::~Game()
{
	// TODO Auto-generated destructor stub
}
