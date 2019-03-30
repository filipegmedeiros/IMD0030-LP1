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

Game::Game()
    : winValue(0),
      numPlayers(0),
      turn(0)

{
}

void Game::setDice() //! PROFESSOR VAI RECLAMAR MUITO COM ISSO. Tem que usar o treco de c++
{
    srand(time(0));
    int dice1 = (int)(1 + rand() % 6);
    int dice2 = (int)(1 + rand() % 6);
    DiceSum = dice1 + dice2;
}

int Game::getDice()
{
    return DiceSum;
}

void Game::setWinValue(int N)
{
    winValue = N;
}

void Game::setNumberOfPlayers(int nPlayers)
{
    numPlayers = nPlayers;
}

int Game::getTargetValue()
{
    return winValue;
}

int Game::getNumberOfPlayers()
{
    return numPlayers;
}

Player Game::Play()
{
    Game Game;

    int maxScore;
    int numPlayers;
    int newTurn;

    //Recebe valor de N
    std::cout << "Insert Game maximum Score" << std::endl;
    std::cin >> maxScore;
    Game.setWinValue(maxScore);

    //Recebe nº de players
    std::cout << "Insert Number of Players:" << std::endl;
    std::cin >> numPlayers;
    Game.setNumberOfPlayers(numPlayers);

    //Instancia o vetor que cabe os jogadores
    Player player[numPlayers];

    //Instancia Vencedor
    Player winner;

    //Loop do jogo
    //TODO: Quebrar esse codigo para ser apenas o rolar?
    //TODO: Ter a function pra saber quem ta na frente qnd todos os players tiverem InGame(false) ou se alguem atingir exatamente o valor
    std::string choice = "";
    int diceRoll = 0, count = 0;

    while (winner.getWinner() == false)
    {
        for (int i = 0; i < numPlayers; ++i)
        {
            std::cout << "Player " << i + 1 << " do you want to roll the dice? type 'yes' to roll or any key for NO " << std::endl;
            std::cin >> choice;
            if (choice == "yes")
            {
                Game.setDice();
                diceRoll = Game.getDice();
                player[i].setScore(diceRoll);
                if (diceRoll > maxScore)
                {
                    player[i].setInGame(false);
                    std::cout << "Player " << i + 1 << " rolled " << diceRoll << ". Total score is " << player[i].getScore() << " And left the game." << std::endl;
                }
                std::cout << "Player " << i + 1 << " rolled " << diceRoll << ". Total score is " << player[i].getScore() << " \n"
                          << std::endl;
            }
            else
            {
                std::cout << "Player " << i + 1 << " didn't rolled the dice. Total score is " << player[i].getScore() << std::endl;
            }
        }
    }
}

std::string howWinner()
{
    std::cout << "THE WINNER IS:"
              << "Vencedor." << std::endl;
}