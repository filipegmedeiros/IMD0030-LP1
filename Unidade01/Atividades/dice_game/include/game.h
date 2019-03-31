/*
? --------------------------------------------
! file 		game.h
! author 	Filipe Medeiros and Sara Beatriz.
? news 	    
@ date		26/03/2019
? --------------------------------------------
*/

#ifndef _GAME_H_
#define _GAME_H_

#include <random>
#include <iostream>
#include <vector>
#include <array>

#include "player.h"

class Game
{
  private:
	int winValue;
	int numPlayers;
	int turn;

	int DiceSum;

	//! Setters
	void setDice();
	void setPlayers(std::vector<Player> players);
	void setWinValue(int a);
	void setNumberOfPlayers(int b);

	//! Getters
	int getDice();
	int getTargetValue();
	int getNumberOfPlayers();

	//! Idk explain that above
	int Turn(Player &, int a);
	Player Play();

	//! Checkers Players
	Player whoWon(std::vector<Player> a);
	bool checkPlayers(std::vector<Player> a, Player &b, int c);

  public:
	void GameLoop();
};
#endif