// Copyright (c) 2026 Bryson G All rights reserved.
// .
// Created by: Bryson G
// Date: 10,15,2026
// This program creates a game for
// the user to guess the correct number. It
// lets the user know if they are correct or not

#include <iostream>
int main() {
    // declare variables
    int guessedNumber, correctNumber;

    // set the secret number
    correctNumber = 5;
    // get the user's guess
    std::cout << "Enter your guessed number (0 - 10): ";
    std::cin >> guessedNumber;

    // check if the user is correct or not
    if (guessedNumber == correctNumber) {
        std::cout << "You guessed correct!";
    }
    if (guessedNumber != correctNumber) {
        std::cout << "You guessed wrong!";
        std::cout << "The correct answer was " << correctNumber;
    }
}
