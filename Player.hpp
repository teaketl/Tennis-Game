#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player {
private:
    std::string name;
    int gameScore;
    int setScore;

public:
    // constructor
    Player(const std::string &playerName);

    // setters
    void setName(const std::string &newName); // const str
    void setGameScore(int newGameScore);
    void setSetScore(int newSetScore);

    // getters
    std::string getName() const;
    int getGameScore() const;
    int getSetScore() const;

    // extra methods
    void addPoints();
    void addSetScore();
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
GitH
