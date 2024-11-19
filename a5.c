#include <stdio.h>
#include <string.h>

#define MAX_TRIES 3

void display_word(char word[], char guessed[]) {
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == guessed[i]) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    char word[] = "programming";  // Word to guess
    char guessed[100];            // Array to track guessed characters
    int correct_guesses = 0;       // Number of correct guesses
    int incorrect_guesses = 0;     // Number of incorrect guesses
    int length = strlen(word);     // Length of the word
    int game_over = 0;             // Flag for game status
    
    // Initialize guessed array with underscores to represent unguessed letters
    for (int i = 0; i < length; i++) {
        guessed[i] = '_';
    }
    guessed[length] = '\0';  // Null-terminate the string

    printf("Welcome to Hangman Game!\n");
    printf("You have %d chances to guess the word correctly.\n", MAX_TRIES);

    // Game loop
    while (incorrect_guesses < MAX_TRIES && correct_guesses < length) {
        char guess;
        int found = 0;

        // Display the current progress of the word
        printf("\nCurrent word: ");
        display_word(word, guessed);

        // Prompt user for a letter guess
        printf("Enter a letter: ");
        scanf(" %c", &guess);  // The space before %c is to consume any leftover newline character

        // Check if the guess is correct
        for (int i = 0; i < length; i++) {
            if (word[i] == guess && guessed[i] != guess) {
                guessed[i] = guess;
                correct_guesses++;
                found = 1;
            }
        }

        if (found) {
            printf("Good guess!\n");
        } else {
            incorrect_guesses++;
            printf("Incorrect guess! You have %d chances left.\n", MAX_TRIES - incorrect_guesses);
        }

        // Check if the player has guessed the word correctly
        if (correct_guesses == length) {
            game_over = 1;
            break;
        }
    }

    // End game message
    if (game_over) {
        printf("\nCongratulations! You guessed the word: %s\n", word);
    } else {
        printf("\nSorry, you lost! The correct word was: %s\n", word);
    }

    return 0;
}
