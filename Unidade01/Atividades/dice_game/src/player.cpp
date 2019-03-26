/*
? --------------------------------------------
! file 		player.cpp
! author 	Filipe Medeiros and Sara Beatriz.
? news 	    
@ date		26/03/2019
? --------------------------------------------
*/

#include <string>
#include "player.h"


Player::Player()
{
}

//! New player constructor
Player::Player(std::string _getName) 
    : name(_getName), score(0), inGame(0) //? hmm
{
}

// getName
std::string Player::getName()
{
	return name;
}

// Add to Score
void Player::setScore(int _DiceValue)
{
	score += _DiceValue;
}

// Show score
int Player::getScore()
{
	return score;
}