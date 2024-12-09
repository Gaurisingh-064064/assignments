#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pyramid

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // First part of the pattern (alternating 0 and 1)
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                printf("0");
            } else {
                printf("1");
            }
        }

        // Space between two identical parts of the row
        printf(" ");

        // Second part of the pattern (same as the first part)
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                printf("0");
            } else {
                printf("1");
            }
        }

        // Move to the next line after printing the row
        printf("\n");
    }

    return 0;
}
