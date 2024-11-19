#include <stdio.h>

int main() {
    int n = 5; // Number of rows (you can change this value)
    
    for (int i = 1; i <= n; i++) {
        // Loop to print the pattern for each row
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}
