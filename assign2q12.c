#include <stdio.h>

#define MAX_SIZE 100 // Define the maximum size of the array

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to delete the first element (at the front) of the array
void deleteFront(int arr[], int *size) {
    // Shift elements to the left to fill the gap
    for (int i = 0; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--; // Decrease the size of the array
}

// Function to delete an element at a specific position
void deleteAtPosition(int arr[], int *size, int position) {
    if (position >= *size || position < 0) {
        printf("Invalid position!\n");
        return;
    }
    // Shift elements to the left to remove the element at the specified position
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--; // Decrease the size of the array
}

// Function to delete the last element (at the end) of the array
void deleteEnd(int arr[], int *size) {
    (*size)--; // Simply decrease the size to remove the last element
}

int main() {
    int arr[MAX_SIZE], size, position;

    // Input the initial array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array before any deletions
    printf("Array before deletions: ");
    printArray(arr, size);

    // Delete at the front
    deleteFront(arr, &size);
    printf("Array after deleting the front element: ");
    printArray(arr, size);

    // Delete at a specific position
    printf("Enter the position to delete (position starts from 0): ");
    scanf("%d", &position);
    deleteAtPosition(arr, &size, position);
    printf("Array after deleting the element at position %d: ", position);
    printArray(arr, size);

    // Delete at the end
    deleteEnd(arr, &size);
    printf("Array after deleting the last element: ");
    printArray(arr, size);

    return 0;
}
