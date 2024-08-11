#include <stdio.h>

int main() {
    int size;

    // Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size];

    // Input array elements from the user
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Sort the array using Bubble Sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                // Swap the elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Array elements from minimum to maximum:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
