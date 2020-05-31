/*
 * Game.h
 *
 *  Created on: Apr 28, 2020
 *      Author: hilla
 */

#ifndef GAME_H_
#define GAME_H_
#include "Player.h"
#include "Controller.h"
#include "Deck.h"
class Game
{
	Player player1;
	Player player2;
	Deck deck_of_the_game;
	int counter_round;
	static constexpr int number_of_hands = 5;

public:
	Game();
	Game(Player p1, Player p2);
	virtual ~Game();
	void display_menu();
	void start_game();
	Card pull_off_card();
	int getCounterRound() const;
	void setCounterRound(int counterRound);
	const Deck& getDeckOfTheGame() const;
	void setDeckOfTheGame(const Deck &deckOfTheGame);
	const Player& getPlayer1() const;
	void setPlayer1(const Player &player1);
	const Player& getPlayer2() const;
	void setPlayer2(const Player &player2);
};

#endif /* GAME_H_ */
