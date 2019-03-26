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
//! Messages
	void Welcome();

    // Messages of gets functions
    void getRolledDices(std::vector<int>& );
	void getWinner(Player& player);




//! Randomize
	std::random_device rd;
	std::default_random_engine gen;
	std::uniform_int_distribution<> dis;

//! Iniciate Setup
	int  setNumPlayers(); 
	void SetPlayerNames(std::vector<Player>& );	
	
//! Play
	void  rollDice(std::vector<int>&);

//! Turn
	int Turn(Player& );

	Player Play(); //? Important


//! Player Winner
    Player GetWinner(std::vector<Player> );

public:
	void SomeLoop();
};