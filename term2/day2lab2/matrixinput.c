#include <stdio.h>

int main()
{
    int rows1, cols1, rows2, cols2;
    
    // Input dimensions for the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    // Input dimensions for the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    // Check if dimensions are the same
    while (rows1 != rows2 || cols1 != cols2)
    {
        printf("Matrices dimensions do not match. Please re-enter.\n");

        printf("Enter the number of rows for the first matrix: ");
        scanf("%d", &rows1);
        printf("Enter the number of columns for the first matrix: ");
        scanf("%d", &cols1);

        printf("Enter the number of rows for the second matrix: ");
        scanf("%d", &rows2);
        printf("Enter the number of columns for the second matrix: ");
        scanf("%d", &cols2);
    }

    int matrix1[rows1][cols1], matrix2[rows1][cols1], result[rows1][cols1];

    // Input elements for the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols1; ++j)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols1; ++j)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Sum the matrices
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols1; ++j)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the result
    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols1; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
