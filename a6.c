#include <stdio.h>

#define SIZE 3 // Size of the Tic Tac Toe board

// Function to display the current state of the board
void displayBoard(char board[SIZE][SIZE]) {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c", board[i][j]);
            if (j < SIZE - 1) printf(" | ");
        }
        printf("\n");
        if (i < SIZE - 1) printf("---------\n");
    }
    printf("\n");
}

// Function to check if a player has won
int checkWinner(char board[SIZE][SIZE], char symbol) {
    // Check rows
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol)
            return 1;
    }
    
    // Check columns
    for (int i = 0; i < SIZE; i++) {
        if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)
            return 1;
    }

    // Check diagonals
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
        return 1;
    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
        return 1;

    return 0;
}

// Function to check if the board is full (for detecting a draw)
int isBoardFull(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') // Empty space found
                return 0;
        }
    }
    return 1;
}

// Function to handle the player's move
void playerMove(char board[SIZE][SIZE], char symbol) {
    int row, col;

    while (1) {
        printf("Enter row and column (1-3) for '%c': ", symbol);
        scanf("%d %d", &row, &col);
        
        // Adjust to 0-indexed
        row--;
        col--;

        // Check if the chosen cell is valid
        if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ') {
            board[row][col] = symbol;
            break;
        } else {
            printf("Invalid move. Try again.\n");
        }
    }
}

int main() {
    char board[SIZE][SIZE] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int turn = 0; // 0 for Player 1, 1 for Player 2
    char player1 = 'X', player2 = 'O';
    int gameOver = 0;

    printf("Welcome to Tic Tac Toe Game!\n");
    displayBoard(board);

    // Main game loop
    while (!gameOver) {
        if (turn % 2 == 0) {
            // Player 1's move (X)
            playerMove(board, player1);
        } else {
            // Player 2's move (O)
            playerMove(board, player2);
        }

        // Display the board after each move
        displayBoard(board);

        // Check if there is a winner
        if (checkWinner(board, player1)) {
            printf("Player 1 (X) wins!\n");
            gameOver = 1;
        } else if (checkWinner(board, player2)) {
            printf("Player 2 (O) wins!\n");
            gameOver = 1;
        } else if (isBoardFull(board)) {
            // Check for a draw
            printf("It's a draw!\n");
            gameOver = 1;
        }

        // Switch to the other player
        turn++;
    }

    return 0;
}
