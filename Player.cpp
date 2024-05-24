#include "Player.hpp"

//constructor
Player::Player(const std::string &playerName) : name(playerName), gameScore(0), setScore(0) {}

// setters
void Player::setName(const std::string &newName) {
    name = newName;
}

void Player::setGameScore(int newGameScore) {
    gameScore = newGameScore;
}

void Player::setSetScore(int newSetScore) {
    setScore = newSetScore;
}

//  getters
std::string Player::getName() const {
    return name;
}

int Player::getGameScore() const {
    return gameScore;
}

int Player::getSetScore() const {
    return setScore;
}

//extra methods

void Player::addPoints() { //add 15, 30, 45
    if (gameScore == 0) {
        gameScore = 15;
    } else if (gameScore == 15) {
        gameScore = 30;
    } else if (gameScore == 30) {
        gameScore = 45;
    }
}

//add to set score -> to be used to add after each win
void Player::addSetScore() {
    setScore++;
}
FooterIndiana University
