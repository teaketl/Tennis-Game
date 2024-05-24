#ifndef SET_HPP
#define SET_HPP

#include "Game.hpp"
#include "Player.hpp" //do i need this here ? unsure
#include <vector>

class Set {
private:
    Player player1;
    Player player2;
    std::vector<Game> games;

public:

    //constructor
    Set(const std::string &playerName1, const std::string &playerName2);
    
    //setters
    void setPlayer1(std::string &name); //pass in whatever is in name
    void setPlayer2(std::string &name);
    void setGames(std::vector<Game> &newGames); //pass in whatever is in games
    
    //getters
    std::string getPlayer1();
    std::string getPlayer2();
    std::vector<Game> getGames();

    
    //methods
    void initializeGames();
    void playGames();
    bool isSetOver() const;
    void getSetWinner() const;
    void printSetScore();
};

#endif
FooterIndiana University
© 2024 GitHub, Inc.
Footer navigation
Help
Support
API
Training
Blog
About
