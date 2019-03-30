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

// Add to Score
void Player::setScore(int diceValue)
{
	score += diceValue;
}

// Show score
int Player::getScore()
{
	return score;
}