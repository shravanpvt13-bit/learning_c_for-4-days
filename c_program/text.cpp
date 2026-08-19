#include <iostream>
#include <random>

void runGame() {
    // Set up modern C++ random number generation
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);

    int numberToGuess = dist(gen);
    int attempts = 0;
    const int maxAttempts = 7;
    int guess = 0;

    std::cout << "=== C++ Number Guessing Game ===\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n";
    std::cout << "You have " << maxAttempts << " attempts to guess it.\n\n";

    while (attempts < maxAttempts) {
        std::cout << "Attempt " << (attempts + 1) << "/" << maxAttempts << " - Enter your guess: ";
        
        if (!(std::cin >> guess)) {
            std::cout << "Invalid input! Please enter an integer.\n\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        attempts++;

        if (guess < numberToGuess) {
            std::cout << "Too low!\n\n";
        } else if (guess > numberToGuess) {
            std::cout << "Too high!\n\n";
        } else {
            std::cout << "🎉 Congratulations! You guessed the number (" 
                      << numberToGuess << ") in " << attempts << " attempts!\n";
            return;
        }
    }

    std::cout << "❌ Game over! The secret number was " << numberToGuess << ".\n";
}

int main() {
    runGame();
    return 0;
}