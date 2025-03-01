// Created by Domin on 2.23.2025 (updated 3.01.2025)
// File: spaceship.h

#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <string>
#include <iostream>

class Spaceship {
private:
    std::string name;
    int lives;
    double shotPower;
    int speed;

public:

    Spaceship(std::string shipName = "Unnamed Ship",
              int lifeCount = 5,
              double power = 1000.0,
              int spd = 100) {
        name = shipName;
        lives = lifeCount;
        shotPower = power;
        speed = spd;
    }


    void describe() const {
        std::cout << "Spaceship Details:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Lives: " << lives << std::endl;
        std::cout << "Shot Power: " << shotPower << " units" << std::endl;
        std::cout << "Speed: " << speed << " LY/h" << std::endl;
    }
};

#endif // SPACESHIP_H