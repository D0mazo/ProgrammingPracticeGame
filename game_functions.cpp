#include "game_functions.h"
#include <ctime>

void displayWelcomeScreen() {
    std::cout << "********************************************" << std::endl;
    std::cout << "                SHOOTING GAME" << std::endl;
    std::cout << "********************************************" << std::endl;
    std::cout << "         Welcome to the Shooting Game! " << std::endl;
    std::cout << "         Get ready to test your skills." << std::endl;
    std::cout << "********************************************" << std::endl;
}

void getUserSelection() {
    std::string name;
    int level;

    std::cout << "Enter your name: ";
    std::cin.ignore(); // To ignore any leftover newline character in the buffer
    std::getline(std::cin, name);

    std::cout << "\n";
    std::cout << "Choose a level:\n";
    std::cout << "1. Easy\n";
    std::cout << "2. Medium\n";
    std::cout << "3. Hard\n";
    std::cout << "Enter your choice (1-3): ";
    std::cin >> level;

    while (level < 1 || level > 3) {
        std::cout << "Invalid choice! Please enter a number between 1 and 3: ";
        std::cin >> level;
    }

    std::cout << "\n";
    std::cout << "Hello, " << name << "! You selected ";
    switch (level) {
        case 1: std::cout << "Easy"; break;
        case 2: std::cout << "Medium"; break;
        case 3: std::cout << "Hard"; break;
    }
    std::cout << " level.\n";
}