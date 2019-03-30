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
	Game();

	//! Setters
	void setDice();
	void setPlayers(std::vector<Player>& players);	
	void setWinValue(int );
	void setNumberOfPlayers(int);

	//! Getters
	int getDice();
	int getTargetValue();
	int getNumberOfPlayers();

	//! Idk explain that above
	int Turn(Player& ,int );
	Player Play();


	void gameLoop();
	//! Checkers Players 
	Player whoWon(std::vector<Player> );
	bool checkPlayers(std::vector<Player>, Player& , int );
};
