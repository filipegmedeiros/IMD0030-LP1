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
	std::string name; // Name Player
	int score; // Acumulated Score

public:
//! Constructors
	Player();
	Player(std::string ); // New player constructor

//! sets	
	void setScore(int ); // Add to Score

//! gets
	int getScore(); // Show score	
	std::string getName(); // Show Name    
	

};

#endif