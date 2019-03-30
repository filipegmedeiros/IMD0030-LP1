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

	int TargetValue; // N
	int NumberOfPlayers;
	int DiceSum;
 
public:
	void setDice();
	void setTargetValue(int);
	void setNumberOfPlayers(int);
	int getDice();
	int getTargetValue();
	int getNumberOfPlayers();
  Game(){};
};

void Play();