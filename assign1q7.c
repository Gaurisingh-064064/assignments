#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(int binary) {
    int decimal = 0, remainder, i = 0;
    
    // Convert binary to decimal by iterating through each bit
    while (binary != 0) {
        remainder = binary % 10;  // Get the last digit (bit)
        decimal += remainder * pow(2, i);  // Add to the decimal result
        binary /= 10;  // Remove the last digit
        i++;  // Increment the power of 2
    }
    
    return decimal;
}

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32];  // Array to store binary number
    int i = 0;
    
    // Convert decimal to binary by dividing by 2
    while (decimal > 0) {
        binary[i] = decimal % 2;  // Store remainder (0 or 1)
        decimal = decimal / 2;  // Divide the number by 2
        i++;
    }
    
    // Print the binary number in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int choice, num;
    
    // Display the menu for the user to choose an option
    printf("Choose an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        // Binary to Decimal
        printf("Enter a binary number: ");
        scanf("%d", &num);
        
        int decimal = binaryToDecimal(num);
        printf("Decimal equivalent: %d\n", decimal);
        
    } else if (choice == 2) {
        // Decimal to Binary
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        
        decimalToBinary(num);
        
    } else {
        printf("Invalid choice! Please choose 1 or 2.\n");
    }
    
    return 0;
}
