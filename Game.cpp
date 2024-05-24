#include "Game.hpp"
#include <iostream>
#include <cstdlib>

//constructor
Game::Game(const std::string &playerName1, const std::string &playerName2)
    : player1(playerName1), player2(playerName2) {} 

//full setters
void Game::setPlayer1(const std::string &newName1) {
    player1.setName(newName1);
}

void Game::setPlayer2(const std::string &newName2) {
    player2.setName(newName2);
}

//getters fleshed out
std::string Game::getPlayer1() const {
    return player1.getName();
}

std::string Game::getPlayer2() const {
    return player2.getName();
}

void Game::playRound() {
    if (rand() % 2 == 1) { //add points if it is 1 else points given to player2
        player1.addPoints();
    } else {
        player2.addPoints();
    }
}

void Game::play() {
    std::cout << "The game is starting, get your snacks ready!" << std::endl;
    while (!isGameOver()) { //when game is over exit and print winner, while not over keep going
        playRound(); 
        printPlayers(); //shows players and score
    }
    std::cout << "The winner is: " << getWinner() << std::endl;
    
}

bool Game::isGameOver() const { //stop when 45
    return (player1.getGameScore() >= 45 or player2.getGameScore() >= 45);
}

std::string Game::getWinner() const { 
    if (player1.getGameScore() > player2.getGameScore()) { //if gamescore bigger then they win
        return player1.getName();
    } else if (player2.getGameScore() > player1.getGameScore()) {
        return player2.getName();
    } //need another statement if tie keep playing but the way it is shouldnt allow for a tie 6/11 wins 
}

void Game::printPlayers() const { //print players and their scores
    std::cout << player1.getName() << ": " << player1.getGameScore()<< std::endl;
    std::cout << player2.getName() << ": " << player2.getGameScore()<< std::endl;
}
