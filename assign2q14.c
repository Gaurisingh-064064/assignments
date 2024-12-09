#include <stdio.h>

#define MAX_SIZE 1000

// Function to print duplicates in the array
void printDuplicates(int arr[], int size) {
    int freq[MAX_SIZE] = {0};  // Array to store the frequency of each element
    int foundDuplicate = 0;  // Flag to check if any duplicates are found
    
    // Count the frequency of each element
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    
    // Print elements with frequency greater than 1 (duplicates)
    for (int i = 0; i < size; i++) {
        if (freq[arr[i]] > 1) {
            printf("%d ", arr[i]);
            freq[arr[i]] = 0; // Set the frequency to 0 to avoid printing it again
            foundDuplicate = 1;
        }
    }
    
    // If no duplicates were found
    if (!foundDuplicate) {
        printf("-1");
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicates in the array: ");
    printDuplicates(arr, size);

    // Another example
    int arr2[] = {5, 40, 1, 40, 100000, 1, 5, 1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Duplicates in the array: ");
    printDuplicates(arr2, size2);

    return 0;
}
