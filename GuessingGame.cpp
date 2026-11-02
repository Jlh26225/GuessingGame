#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int secretNumber;
    int guess;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    cout << "Guess the random number between 1 and 100." << endl;

    // Loop until the user correctly guesses the number
    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high. Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low. Try again." << endl;
        }
        else {
            cout << "Congratulations. You figured out my number." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}