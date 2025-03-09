// game_functions.h
#ifndef GAME_FUNCTIONS_H
#define GAME_FUNCTIONS_H

#include <iostream>
#include <string>
#include <limits>

const int consoleWidth = 50;

void displayWelcomeScreen();
std::pair<std::string, int> getUserSelection();  // Now returns name and level

#endif // GAME_FUNCTIONS_H