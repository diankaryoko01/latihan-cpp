#include <iostream>
#include <cstdlib> // Needed for rand() and srand() function
#include <ctime>   // Needed for time()
using namespace std;

int main() {
    int chosen_number;
    
    do {
        srand(time(0));

        int attempt = 1;
        int random_number = rand() % 51;
        
        cout << "====== Number Guessing Game ======" << endl;
        cout << "1. Start Game" << endl;
        cout << "2. Exit" << endl;
        cout << "Choose an option: ";

        cin >> chosen_number;

        switch(chosen_number) {
            case 1: 
                cout << endl << "I have selected a number between 1 and 50. You have 5 tries." << endl << endl;
                for(int attempt_number = 0; attempt_number != random_number && attempt < 6; attempt += 1) {
                    cout << "Attempt " << attempt << ": Enter your guess: ";
                    cin >> attempt_number;

                    if(attempt_number == random_number) {
                        cout << "Congratulations! You guessed it in " << attempt << " attempts!" << endl << endl;
                    }
                    else if(attempt_number > random_number && attempt < 5) {
                        cout << "Too high!" << endl << endl;
                    }
                    else if(attempt_number < random_number && attempt < 5) {
                        cout << "Too low!" << endl << endl;
                    }
                    else if(attempt_number > random_number && attempt == 5) {
                        cout << "Too high!" << endl << "Sorry, you've used all your attempts. The correct number was: " << random_number << endl;
                    }
                    else if(attempt_number < random_number && attempt == 5) {
                        cout << "Too low!" << endl << "Sorry, you've used all your attempts. The correct number was: " << random_number << endl;
                    }
                }
                break;
            case 2: 
                cout << "Bye, see you next time!" << endl << endl;
                break;
        }
    } while(chosen_number == 1);

    return 0;
}