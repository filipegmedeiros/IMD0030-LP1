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


void Game::setDice()   
{
    srand(time(0));
    int dice1 = (int) (1+rand()%6);
    int dice2 = (int) (1+rand()%6);
    DiceSum = dice1 + dice2;
}

int Game::getDice(){
    return DiceSum;
}

void Game::setTargetValue(int N)
{
   TargetValue = N;
}

void Game::setNumberOfPlayers(int nPlayers){
    NumberOfPlayers = nPlayers;
}


int Game::getTargetValue()
{
    return TargetValue;
}
    
int Game::getNumberOfPlayers()
{
    return NumberOfPlayers;
}

void Play()
{
    Game Game;
    int  nPlayers = 0, N = 0;
    int  getPlayerTurn = 0; // base in index of vector

    //Recebe valor de N
    std::cout << "Insert Target Value:" << std::endl;
    std::cin >> N;
    Game.setTargetValue(N);

    //Recebe nº de players
    std::cout << "Insert Number of Players:" << std::endl;
    std::cin >> nPlayers;
    Game.setNumberOfPlayers(nPlayers);

    //Instancia nPlayers
    Player player[nPlayers];

    //Loop do jogo
    int choice = 0, diceRoll = 0, count=0;
	while (count<3)
	{
        for (int i = 0; i < nPlayers; ++i)
        {
            std::cout << "Player_" << i+1 << " do you want to roll the dice? 1 for yes / 0 for no" << std::endl;
            std::cin >> choice;
            if(choice==1){
                Game.setDice();
                diceRoll = Game.getDice();
                player[i].setScore(diceRoll);
                std::cout << "Player_" << i+1 << " rolled " << diceRoll << ". Total score is " << player[i].getScore() << std::endl;

            }else{
                std::cout << "Player_" << i+1 << " didn't rolled the dice. Total score is " << player[i].getScore() << std::endl;
            }
        }

        count++;
    }
}