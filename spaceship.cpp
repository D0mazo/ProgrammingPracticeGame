#include "spaceship.h"

int main() {
    // Create a spaceship object
    Spaceship myShip("Explorer One", 10, 5000.0, 250);
    
    // Describe the spaceship to console
    myShip.describe();
    
    return 0;
}