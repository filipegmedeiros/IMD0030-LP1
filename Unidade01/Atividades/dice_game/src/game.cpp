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

void Game::setDice() //! Solved
{

    std::random_device rng;

    int dice1 = rng() % 6 + 1;
    int dice2 = rng() % 6 + 1;
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

//create vector of players
void Game::setPlayers(std::vector<Player> &players)
{
    for (unsigned int i = 0; i < players.size(); i++)
    {
        players[i] = Player(i);
    }
}

Player Game::whoWon(std::vector<Player> players)
{
    Player winner = players[0];

    for (unsigned int i = 1; i < players.size(); i++)
    {

        if (players[i].getInGame == true || players[i].getScore() > players[i - 1].getScore())
        {
            winner = players[i];
        }
    }

    return winner;
}

bool Game::checkPlayers(std::vector<Player> players, Player &playerTurn, int maxScore)
{
    bool firstWinner = true;

    //! tira o que tiver o valor acima do maximo
    if (playerTurn.getScore > maxScore)
    {
        playerTurn.setInGame == false;
    }

    if (playerTurn.getScore == maxScore)
    {
        playerTurn.setWinner == true;
        return firstWinner;
    }

    int count = 0; //! contador pra saber se tem apenas 1 jogando.
    int won = 0;   //! posicao do jogador vencedor

    //! checka se só tem 1 no jogo.
    for (unsigned int i = 0; i < players.size(); i++)
    {
        if (players[i].getInGame == true)
        {
            count++;
            won = i;
        }
    }
    if (count == 1)
    {
        players[won].setWinner == true;
        return firstWinner;
    }
}

int Game::Turn(Player &player, int i)
{
    int diceRoll;
    std::string choice = "";
    std::cout << "Player " << i << " do you want to roll the dice? type yes" << std::endl;
    std::cin >> choice;

    if (choice == "yes")
    {
        Game::setDice();
        diceRoll = Game::getDice();
        player.setScore(diceRoll);
        std::cout << "Player " << i << " rolled " << diceRoll << ". Total score is " << player.getScore() << std::endl;
    }
    else
    {
        std::cout << "Player " << i << " didn't rolled the dice. Total score is " << player.getScore() << std::endl;
    }
}

// Primary Game Loop
Player Game::Play()
{
    Player winner; // While getWinner is False, the game will continue to loop

    int i = 0;         // to see how player turn is
    int turnScore = 0; // The value the player has scored this turn

    bool onlySurvived = false;
    bool firstWinner = false;

    //Set MaxScore
    int maxScore;
    std::cout << "Insert Game maximum Score" << std::endl;
    std::cin >> maxScore;

    //Recebe nº de players
    int numPlayers;
    std::cout << "Insert Number of Players:" << std::endl;
    std::cin >> numPlayers;

    //! generate a vector to hold Player objects based on number of players
    std::vector<Player> players(numPlayers);

    //! Continue looping until a winner is declared
    while (winner.getWinner() == false)
    {
        // Return to first players turn if necessary
        if (i == players.size())
        {
            i = 0;
        }

        // The game is over if all players have had a turn after a player reaches maxScore
        if (firstWinner == true)
        {
            winner = whoWon(players);
            continue;
        }

        // Run a turn for a player and put their score into the turnScore variable
        turnScore = Turn(players[i], i);

        // add turnscore to players score
        if (turnScore > 0)
        {
            players[i].setScore(turnScore);
        }

        // Check if players score is over max or its only surviver
        if (firstWinner == false && checkPlayers(players, players[i], maxScore) == true)
        {

            firstWinner = true;
        }

        i++; // Send to next players turn
    }

    return winner;
}

void Game::gameLoop()
{

    Player winner;

    winner = Play();
    std::cout << " is the winner with a score of " << winner.getScore() << std::endl;
}
