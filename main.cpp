// main.cpp
#include "game_functions.h"
#include "spaceship.h"

int main() {
    displayWelcomeScreen();
    auto [playerName, level] = getUserSelection();  // Get name and level

    Spaceship myShip(playerName, 10, 5000.0, 250);
    myShip.describe();

    std::cout << "        Press Space to start " << std::endl;
    
    return 0;
}