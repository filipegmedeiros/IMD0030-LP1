/*
? --------------------------------------------
! file 		player.h
! author 	Filipe Medeiros and Sara Beatriz.
? news 	   
@ date		26/03/2019
? --------------------------------------------
*/

#ifndef _Player_H_
#define _Player_H_

#include <string>

class Player 
{
private:
	int score = 0; // Acumulated Score

public:
//! Constructors
	Player();

//! sets
	void setScore(int score); // Add to Score
	void  setInGame();

//! gets
	int getScore(); // Show score	
 

};

#endif