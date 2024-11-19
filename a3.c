#include <stdio.h>
#include <math.h> // For logarithmic and square root functions

int main() {
    int choice;
    double num1, num2, result;

    // Displaying the menu
    do {
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithmic values\n");
        printf("6. Square root\n");
        printf("7. Exit\n");

        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Addition
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;

            case 2: // Subtraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;

            case 3: // Multiplication
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;

            case 4: // Division
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0) {
                    printf("Error! Division by zero.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                }
                break;

            case 5: // Logarithmic value
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 <= 0) {
                    printf("Error! Logarithm of non-positive numbers is undefined.\n");
                } else {
                    result = log(num1); // log() function calculates the natural logarithm (base e)
                    printf("Natural Logarithm (log(%lf)) = %.2lf\n", num1, result);
                }
                break;

            case 6: // Square root
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 < 0) {
                    printf("Error! Square root of negative numbers is undefined in real numbers.\n");
                } else {
                    result = sqrt(num1); // sqrt() function calculates the square root
                    printf("Square root of %.2lf = %.2lf\n", num1, result);
                }
                break;

            case 7: // Exit
                printf("Exiting the calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please enter a valid option (1-7).\n");
        }
    } while (choice != 7); // Continue the loop until the user chooses to exit

    return 0;
}
