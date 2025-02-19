#include <iostream>
#include <string>

using namespace std;

void displayWelcomeScreen() {
    cout << "******************************\n";
    cout << "*        SHOOTING GAME       *\n";
    cout << "******************************\n";
    cout << "Welcome to the Shooting Game!\n";
    cout << "Get ready to test your skills.\n";
    cout << "\n";
}

void getUserSelection() {
    string name;
    int level;

    // Ask for the user's name
    cout << "Enter your name: ";
    getline(cin, name);

    // Display level choices
    cout << "\nChoose a level:\n";
    cout << "1. Easy\n";
    cout << "2. Medium\n";
    cout << "3. Hard\n";
    cout << "Enter your choice (1-3): ";
    cin >> level;

    // Validate input
    while (level < 1 || level > 3) {
        cout << "Invalid choice! Please enter a number between 1 and 3: ";
        cin >> level;
    }

    // Display chosen level
    cout << "\nHello, " << name << "! You selected ";
    switch (level) {
        case 1: cout << "Easy"; break;
        case 2: cout << "Medium"; break;
        case 3: cout << "Hard"; break;
    }
    cout << " level.\n";
}