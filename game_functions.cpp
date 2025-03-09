// game_functions.cpp
#include "game_functions.h"
#include "spaceship.h"

void displayWelcomeScreen() {
    std::cout << "********************************************" << std::endl;
    std::cout << "                SHOOTING GAME" << std::endl;
    std::cout << "********************************************" << std::endl;
    std::cout << "         Welcome to the Shooting Game! " << std::endl;
    std::cout << "         Get ready to test your skills." << std::endl;
    std::cout << "********************************************" << std::endl;
}

std::pair<std::string, int> getUserSelection() {
    std::string name;
    int level;

    std::cout << "Enter your name: ";
    // Only ignore if there's something to ignore from previous input
    if (std::cin.rdbuf()->in_avail() > 0) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::getline(std::cin, name);

    std::cout << "********************************************" << std::endl;
    std::cout << "\n";
    std::cout << "Choose a level (Enter your choice (1-3):\n";
    std::cout << "1. Easy\n";
    std::cout << "2. Medium\n";
    std::cout << "3. Hard\n";
    std::cout << "********************************************" << std::endl;

    while (true) {
        std::cin >> level;
        if (std::cin.fail() || level < 1 || level > 3) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice! Please enter a number between 1 and 3.\n";
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer after valid input
            break;
        }
    }

    std::cout << "\n";
    std::cout << "Hello, " << name << "! You selected ";
    switch (level) {
        case 1: std::cout << "Easy"; break;
        case 2: std::cout << "Medium"; break;
        case 3: std::cout << "Hard"; break;
    }
    std::cout << " level.\n";
    std::cout << "********************************************" << std::endl;

    return std::make_pair(name, level);
}