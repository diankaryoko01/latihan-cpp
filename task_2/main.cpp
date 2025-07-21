#include <iostream>
#include <cstdlib> // Needed for rand() and srand() function
#include <ctime>   // Needed for time()
using namespace std;

int main() {
    int chosenNumber;

    do {
        displayMenu();
        cin >> chosenNumber;

        switch(chosenNumber) {
            case 1: 
                startGame();
                break;
            case 2: 
                exitGame();
                break;
            default:
                cout << "Invalid input. Please only choose number 1 or 2.\n\n";
                break;
        }
    } while(chosenNumber != 2);

    return 0;
}

void displayMenu() {
    cout << "====== Number Guessing Game ======" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Exit" << endl;
    cout << "Choose an option: ";
}

void startGame() {
    cout << "\nI have selected a number between 1 and 50. You have 5 tries.\n\n";

    srand(time(0));
    int randomNumber = (rand() % 50) + 1;
    int guess = 0;

    for(int attempt = 1; attempt < 6; attempt++) {
        cout << "Attempt " << attempt << ": Enter your guess: ";
        cin >> guess;

        // Validate number range
        if(guess < 1 || guess > 50) {
            cout << "Your guess is out of range. The selected number is between 1 and 50. Try again!\n\n";
            attempt--;
            continue;
        }
        
        // Validate guess
        if(guess == randomNumber) {
            cout << "Congratulations! You guessed it in " << attempt << " attempts!\n\n";
            break;
        }
        else if(guess > randomNumber) {
            cout << "Too high!\n\n";
        }
        else {
            cout << "Too low!\n\n";
        }
        
        // Game over
        if(attempt == 5) {
            cout << "Sorry, you've used all your attempts. The correct number was: " << randomNumber << "\n\n";
        }
    }
}

void exitGame() {
    cout << "Bye, see you next time!\n\n";
}