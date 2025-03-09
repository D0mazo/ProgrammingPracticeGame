// main.cpp
#include "game_functions.h"
#include "spaceship.h"

int main() {
    displayWelcomeScreen();
    getUserSelection();
    
    Spaceship myShip("Explorer One", 10, 5000.0, 250);
    myShip.describe();
    
    return 0;
}