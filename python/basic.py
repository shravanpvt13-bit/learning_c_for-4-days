import random

def run_game():
    number_to_guess = random.randint(1, 100)
    attempts = 0
    max_attempts = 7

    print("--- Number Guessing Game ---")
    print("I'm thinking of a number between 1 and 100.")
    print(f"You have {max_attempts} attempts to guess it.\n")

    while attempts < max_attempts:
        try:
            guess = int(input(f"Attempt {attempts + 1}/{max_attempts} - Enter your guess: "))
        except ValueError:
            print("Invalid input! Please enter a valid integer.\n")
            continue

        attempts += 1

        if guess < number_to_guess:
            print("Too low!\n")
        elif guess > number_to_guess:
            print("Too high!\n")
        else:
            print(f"🎉 Congratulations! You guessed the correct number ({number_to_guess}) in {attempts} attempts.")
            return

    print(f"❌ Game over! The number was {number_to_guess}.")

if __name__ == "__main__":
    run_game()