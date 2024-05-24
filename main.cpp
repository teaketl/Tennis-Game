#include "Player.hpp"
#include "Game.hpp"
#include "Set.hpp"
#include <iostream>

int main() {
    // creating players
    Player player1("Jake"); //adventure time characters
    Player player2("Finn");

    // new set & game
    Set tennisSet(player1.getName(), player2.getName());
    Game tennisGame(player1.getName(), player2.getName());
    
    while (!tennisSet.isSetOver()) { //while set is not over play games and whatnot
        tennisSet.initializeGames(); //start
        tennisSet.playGames(); //play games
        tennisSet.printSetScore(); //print score at end
    }

    if (tennisSet.isSetOver()) { //if set over get winner and print
        tennisSet.getSetWinner();
    } else {
        std::cout << " " <<std::endl; //how to end w/o break
    }

    return 0;
}
