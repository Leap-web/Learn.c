#include <stdio.h>

int main() {
    float array[10];
    int length = sizeof(array) / sizeof(array[0]);
    float sum = 0;

    // Input values from the user
    for (int i = 0; i < length; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &array[i]);  // Use %f to read float values
    }

    // Calculate the sum of the array elements
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }

    float average = sum / length;

    // Output the sum, average, and length of the array
    printf("The sum is = %.2f\n", sum);
    printf("The average is = %.2f\n", average);  // Use %.2f to print float values with 2 decimal places
    printf("The length of the array is %d\n", length);

    // Print numbers that are greater than or equal to the average
    printf("The numbers that are greater than or equal to the average are: ");
    for (int i = 0; i < length; i++) {
        if (array[i] >= average) {
            printf("%.2f ", array[i]);  // Use %.2f to print float values with 2 decimal places
        }
    }
    printf("\n");

    return 0;
}
