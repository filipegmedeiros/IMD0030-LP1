/*
? --------------------------------------------
! file 		game.h
! author 	Filipe Medeiros and Sara Beatriz.
? news 	    
@ date		26/03/2019
? --------------------------------------------
*/
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

  public:
	//! Constructor
	Game::Game();

	//! Setters
	void setDice();
	void setWinValue(int);
	void setNumberOfPlayers(int);

	//! Getters
	int getDice();
	int getTargetValue();
	int getNumberOfPlayers();

	//! Idk explain that above
	Player Play();

	//! Player Winner
	Player GetWinner(std::vector<Player>);
};

std::string howWinner();