#include "Set.hpp"
#include <iostream>

//full constructor
Set::Set(const std::string &playerName1, const std::string &playerName2)
    : player1(playerName1), player2(playerName2) {}
    
//setters
void Set::setPlayer1(std::string &name){ //pass in whatever is in name
    player1.setName(name);
}

void Set::setPlayer2(std::string &name) {
    player2.setName(name);
}

void Set::setGames(std::vector<Game> &newGames){ //pass in whatever is in games
    games = newGames;
}
    //getters
std::string Set::getPlayer1(){
    return player1.getName();
}

std::string Set::getPlayer2() {
    return player2.getName();
}

//std::vector<Game> getGames() {
  //  return games;
//}


void Set::initializeGames() {
    for (int i = 0; i < 11; i++) { //11 games so at least 6 matches are played
        Game newGame(player1.getName(), player2.getName()); //initialize game
        newGame.play(); //play games
        games.push_back(newGame); //add to games vector
    }
}

void Set::playGames() { 
    for (auto &game : games) { //loop through games in game
        std::string matchWinner = game.getWinner(); //variale to store winner
        if (matchWinner == player1.getName()) {
            player1.addSetScore(); //if win add to set score
        } else if (matchWinner == player2.getName()) {
            player2.addSetScore();
        }
    //printSetScore(); //prints at the end of loop
        
    }
}

bool Set::isSetOver() const {
    int player1SetScore = player1.getSetScore();
    int player2SetScore = player2.getSetScore();
    
    return (player1SetScore >=6 or player2SetScore >= 6); //if 6 then end
}

void Set::getSetWinner() const {
    int player1SetScore = player1.getSetScore(); //save as variables to compare
    int player2SetScore = player2.getSetScore();
    
    if (player1SetScore > player2SetScore) { //whoever has more wins set
        std::cout << "The winner of the set is " << player1.getName() << std::endl;
    } else if (player2SetScore > player1SetScore) {
        std::cout << "The winner of the set is " << player2.getName() << std::endl;
    }
}

void Set::printSetScore() { //self explaintory
    std::cout << "Set Score: " <<std::endl;
    std::cout << player1.getName() << " : " << player1.getSetScore() <<std::endl;
    std::cout << player2.getName() << " : " << player2.getSetScore() <<std::endl;
}
