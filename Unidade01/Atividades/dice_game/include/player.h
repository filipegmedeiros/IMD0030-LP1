/*
? --------------------------------------------
! file 		player.h
! author 	Filipe Medeiros and Sara Beatriz.
? news 	   
@ date		26/03/2019
? --------------------------------------------
*/

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player
{
private:
	int score; // Acumulated Score
	bool inGame;
	bool winner;

public:
	//! Constructors
	Player();
	Player(int);

	//! sets
	void setScore(int);		// Add to Score
	void setInGame(bool); // Remove to the Game
	void setWinner(bool);

	//! gets
	int getScore(); // Show score
	int getWinner();
	bool getInGame();
};

#endif