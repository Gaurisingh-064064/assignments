#include <stdio.h>

// Function to check if a number is perfect
int isPerfectNumber(int num) {
    int sum = 0;

    // Find divisors of the number and calculate their sum
    for (int i = 1; i <= num / 2; i++) {  // Divisors cannot be greater than num/2
        if (num % i == 0) {
            sum += i;  // Add divisor to sum
        }
    }

    // If sum of divisors equals the number, it is a perfect number
    return sum == num;
}

int main() {
    int num;

    // Read an integer from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a perfect number
    if (isPerfectNumber(num)) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }

    return 0;
}
