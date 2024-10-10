#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // create a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    std::cout << "Welcome to the number guessing game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;

    while(true) {
        // Ask the user to guess the number
        int userGuess;
        std::cout << "Guess a number: ";
        std::cin >> userGuess;

        // if condition are Check the user's guess is correct
        if (userGuess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number!" << std::endl;
            break;
        }

        // if and else condition are show on whether the guess is too high or too low
        else if (userGuess > secretNumber) {
            std::cout << "Your guess is too high. Try again!" << std::endl;
        } else {
            std::cout << "Your guess is too low. Try again!" << std::endl;
        }
    }

    return 0;
}