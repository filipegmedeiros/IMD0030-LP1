/*
? --------------------------------------------
! file 		game.cpp
! author 	Filipe Medeiros and Sara Beatriz.
? news 	    
@ date		26/03/2019
? --------------------------------------------
*/

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <array>

#include "player.h"
#include "game.h"


void Game::rollDice(std::vector<int>& dicePool)
    
{
	for (unsigned int i = 0; i < dicePool.size(); i++)
	{    
        dicePool[i] = std::round(dis(gen));
    }	
}

Player Game::Play()
{
	Player winner; // While this string is empty, the game will continue to loop
    int  numPlayers = 0;
    int  getPlayerTurn = 0; // base in index of vector


	while (winner.getName() == "") // Continue looping until a winner is declared
	{
        std::cout << "teste" << std::endl;
    }