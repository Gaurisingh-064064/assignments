#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to cyclically rotate the array clockwise by one position
void rotateArray(int arr[], int size) {
    int temp = arr[size - 1]; // Store the last element

    // Shift all elements to the right
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place the last element at the first position
    arr[0] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print original array
    printf("Original array: ");
    printArray(arr, size);

    // Rotate the array
    rotateArray(arr, size);

    // Print the rotated array
    printf("Array after rotating clockwise by one position: ");
    printArray(arr, size);

    return 0;
}
