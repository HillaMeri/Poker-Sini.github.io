//============================================================================
// Name        : PokerSini.cpp
// Author      : Hilla_Meri
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Deck.h"
#include "Player.h"
#include "Controller.h"
#include "Game.h"

using namespace std;

int main()
{
	Player player1;
	Player player2;

	Game my_game(player1,player2);
	cout<<"Name of player1: "<< my_game.getPlayer1().getName()<<endl;
	cout<<"Victory of player1: "<< my_game.getPlayer1().getVictory()<<endl;
	my_game.start_game();
	cout<<"Round number: "<<my_game.getCounterRound()<<endl;
	//my_game.getPlayer1().print_player_hands();
	//my_game.getPlayer2().print_player_hands();
	cout <<endl<< "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
