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

Player::Player( )
{
}

Player::Player(int N) 
  	  :
  score(0),
  inGame(false),
  winner(false)

{
}


int Player::getWinner() // Show Winner
{
	return winner;
}


void Player::setWinner(bool value) // Show Winner
{
	 value = winner;
}

void Player::setInGame(bool value) //
{
	inGame = value;
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

bool Player::getInGame()
{
	return inGame;
}