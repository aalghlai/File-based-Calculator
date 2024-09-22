// Abdulrahman Al-Ghlai w2029025
// Lab Assignment 3 Part B Rock Paper Scissors Lab
// June 25, 2023

// C++ code for Lab 3 Part B:

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayMenu()
{
    cout << "Let's play Rock, Paper, Scissors. Choose a number next to the choice you would like to pick." << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
}

int main()
{
    // variables 
    int playerChoice, computerChoice;

    // display menu
    displayMenu();

    // get player's choice
    cin >> playerChoice;

    // validate player's choice
    if (playerChoice < 1 || playerChoice > 3){
        cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
        return 0;
    }

    // generate computer's choice
    srand(time(0));
    computerChoice = rand() % 3 + 1;

    // display computer's choice
    if (computerChoice == 1){
        cout << "The computer has chosen Rock!" << endl;
    } else if (computerChoice == 2){
        cout << "The computer has chosen Paper!" << endl;
    } else if (computerChoice == 3){
        cout << "The computer has chosen Scissors!" << endl;
    }

    // determine the winner
    if (playerChoice == computerChoice){
        cout << "It's a tie!" << endl;
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
       cout << "You win!" << endl;
    } else {
       cout << "Computer wins!" << endl;
    }

    return 0;
}
