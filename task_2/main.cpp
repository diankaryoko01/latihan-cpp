#include <iostream>
#include <cstdlib> // Needed for rand() and srand() function
#include <ctime>   // Needed for time()
using namespace std;

int main() {
    int chosen_number;
    
    do {
        srand(time(0));

        int random_number = (rand() % 50) + 1;
        int guess = 0;
        
        cout << "====== Number Guessing Game ======" << endl;
        cout << "1. Start Game" << endl;
        cout << "2. Exit" << endl;
        cout << "Choose an option: ";
        cin >> chosen_number;

        switch(chosen_number) {
            case 1: 
                cout << "\nI have selected a number between 1 and 50. You have 5 tries.\n\n";
                for(int attempt = 1; attempt < 6; attempt++) {
                    cout << "Attempt " << attempt << ": Enter your guess: ";
                    cin >> guess;

                    if(guess < 1 || guess > 50) {
                        cout << "Your guess is out of range. The selected number is between 1 and 50. Try again!\n\n";
                        attempt--;
                        continue;
                    }
                    
                    if(guess == random_number) {
                        cout << "Congratulations! You guessed it in " << attempt << " attempts!\n\n";
                        break;
                    }
                    else if(guess > random_number) {
                        cout << "Too high!\n\n";
                    }
                    else {
                        cout << "Too low!\n\n";
                    }
                    
                    if(attempt == 5) {
                        cout << "Sorry, you've used all your attempts. The correct number was: " << random_number << "\n\n";
                    }
                }
                break;
            case 2: 
                cout << "Bye, see you next time!\n\n";
                break;
            default:
                cout << "Invalid input. Please only choose number 1 or 2.\n\n";
                break;
        }
    } while(chosen_number != 2);

    return 0;
}