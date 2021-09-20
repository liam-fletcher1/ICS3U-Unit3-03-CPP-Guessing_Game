// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program asks the user to guess a number between 0 - 9

#include <iostream>
#include <random>

int main() {
    int someRandomNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0 , 9);  // [0,9]
    someRandomNumber = idist(rgen);

    // this function checks if the user picked the correct number
    int number_guessed;

    // input
    std::cout << "Enter the number between 0 - 9: ";
    std::cin >> number_guessed;
    std::cout << "" << std::endl;

    // process
    if (number_guessed == someRandomNumber) {
            // output
            std::cout << "You guessed the number correctly!";
            std::cout << std::endl;
    } else {  std::cout << "You guessed the number incorrectly :(";
            std::cout << std::endl;
            std::cout << "\nDone.";
    }
}
