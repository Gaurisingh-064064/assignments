#include <stdio.h>

// Function to find HCF using Euclid's algorithm
int findHCF(int a, int b) {
    // Using Euclid's algorithm for HCF
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Read two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the findHCF function and print the result
    int hcf = findHCF(num1, num2);
    printf("The HCF of %d and %d is %d.\n", num1, num2, hcf);

    return 0;
}
