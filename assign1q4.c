#include <stdio.h>

// Method 1: Using a temporary variable
void swapUsingTempVariable(int *a, int *b) {
    int temp = *a;
    *a = *b; 
    *b = temp; 
}

// Method 2: Using arithmetic operations (addition and subtraction)
void swapUsingArithmetic(int *a, int *b) {
    *a = *a + *b;  // a = a + b 
    *b = *a - *b;  // b = a - b (which gives the original value of a)
    *a = *a - *b;  // a = a - b (which gives the original value of b)
}

// Method 3: Using bitwise XOR operator
void swapUsingXOR(int *a, int *b) {
    *a = *a ^ *b;  // XOR the values
    *b = *a ^ *b;  // XOR again to get the original value of a
    *a = *a ^ *b;  // XOR again to get the original value of b
}

// Method 4: Using pointers (dereferencing)
void swapUsingPointers(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1, num2;

    // Read two integers from user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Display original values
    printf("\nOriginal values: num1 = %d, num2 = %d\n", num1, num2);

    // Swap using temporary variable
    swapUsingTempVariable(&num1, &num2);
    printf("After swap using temporary variable: num1 = %d, num2 = %d\n", num1, num2);

    // Swap back to original values
    swapUsingTempVariable(&num1, &num2);

    // Swap using arithmetic operations
    swapUsingArithmetic(&num1, &num2);
    printf("After swap using arithmetic: num1 = %d, num2 = %d\n", num1, num2);

    // Swap back to original values
    swapUsingArithmetic(&num1, &num2);

    // Swap using bitwise XOR
    swapUsingXOR(&num1, &num2);
    printf("After swap using XOR: num1 = %d, num2 = %d\n", num1, num2);

    // Swap back to original values
    swapUsingXOR(&num1, &num2);

    // Swap using pointers (same as arithmetic method)
    swapUsingPointers(&num1, &num2);
    printf("After swap using pointers: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
