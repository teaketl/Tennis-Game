#ifndef GAME_HPP
#define GAME_HPP

#include "Player.hpp"

class Game {
private:
    Player player1; //only 2 players
    Player player2;

public:
    
    //construct
    Game(const std::string &playerName1, const std::string &playerName2);
    
    //setters
    void setPlayer1(const std::string &newName1);
    void setPlayer2(const std::string &newName2);
    
    //getters
    std::string getPlayer1() const;
    std::string getPlayer2() const;
    
    //extra methods
    void play();
    bool isGameOver() const;
    std::string getWinner() const;
    void playRound();
    void printPlayers() const; //need to print players and their points
};

#endif
