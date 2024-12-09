#include <stdio.h>

#define MAX_SIZE 100 // Define the maximum size of the array

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert at the front of the array
void insertFront(int arr[], int *size, int value) {
    // Shift elements to the right
    for (int i = *size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value; // Insert the value at the front
    (*size)++;
}

// Function to insert at a specific position in the array
void insertAtPosition(int arr[], int *size, int value, int position) {
    if (position > *size || position < 0) {
        printf("Invalid position!\n");
        return;
    }
    // Shift elements to the right to make space for the new element
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value; // Insert the value at the specified position
    (*size)++;
}

// Function to insert at the end of the array
void insertEnd(int arr[], int *size, int value) {
    arr[*size] = value; // Insert the value at the end
    (*size)++;
}

int main() {
    int arr[MAX_SIZE], size, value, position;

    // Input the initial array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array before any insertions
    printf("Array before insertions: ");
    printArray(arr, size);

    // Insert at the front
    printf("Enter the value to insert at the front: ");
    scanf("%d", &value);
    insertFront(arr, &size, value);
    printf("Array after inserting %d at the front: ", value);
    printArray(arr, size);

    // Insert at a specific position
    printf("Enter the value and position to insert (position starts from 0): ");
    scanf("%d %d", &value, &position);
    insertAtPosition(arr, &size, value, position);
    printf("Array after inserting %d at position %d: ", value, position);
    printArray(arr, size);

    // Insert at the end
    printf("Enter the value to insert at the end: ");
    scanf("%d", &value);
    insertEnd(arr, &size, value);
    printf("Array after inserting %d at the end: ", value);
    printArray(arr, size);

    return 0;
}
