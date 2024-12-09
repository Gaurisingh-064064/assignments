#include <stdio.h>

// Function to calculate the factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the binomial coefficient (n choose k)
long long binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces for formatting
        for (int space = 1; space < rows - i; space++) {
            printf(" ");
        }

        // Print the elements in the current row
        for (int j = 0; j <= i; j++) {
            printf("%lld ", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;

    // Input: Number of rows for Pascal's Triangle
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Print Pascal's Triangle
    printPascalsTriangle(rows);

    return 0;
}
