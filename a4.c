#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    char *choices[] = {"Stone", "Paper", "Scissors"};
    
    // Seed the random number generator
    srand(time(0));

    // Prompt the user to make a choice
    printf("Enter your choice (0 = Stone, 1 = Paper, 2 = Scissors): ");
    scanf("%d", &userChoice);

    // Validate user input
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice! Please enter a number between 0 and 2.\n");
        return 1; // Exit the program if the input is invalid
    }

    // Generate the computer's choice (0 = Stone, 1 = Paper, 2 = Scissors)
    computerChoice = rand() % 100; // Get a random number between 0 and 99

    if (computerChoice < 34) {
        computerChoice = 0; // Stone
    } else if (computerChoice < 67) {
        computerChoice = 1; // Paper
    } else {
        computerChoice = 2; // Scissors
    }

    // Display the choices
    printf("\nYou chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);

    // Determine the winner
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || // Stone vs Scissors
               (userChoice == 1 && computerChoice == 0) || // Paper vs Stone
               (userChoice == 2 && computerChoice == 1)) { // Scissors vs Paper
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
