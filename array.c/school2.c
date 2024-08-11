#include <stdio.h>

int main()
{

    int row1, cols1, row2, cols2;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &row1);

    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    while (row1 != row2 || cols1 != cols2)
    {

        printf("Error: The number of columns for the first matrix must be equal to the number of rows for the second matrix.\n");
        printf("Please try again.\n");
        printf("Enter the number of rows for the first matrix: ");
        scanf("%d", &row1);

        printf("Enter the number of columns for the first matrix: ");
        scanf("%d", &cols1);
        printf("Enter the number of rows for the second matrix: ");
        scanf("%d", &row2);
        printf("Enter the number of columns for the second matrix: ");
        scanf("%d", &cols2);
    }

    int matrix1[row1][cols1], matrix2[row1][cols1], result[row1][cols1];

    printf("Enter elements of the first matrix: ");
    for (int i = 0; i < row1; ++i)
    {
        for (int j = 0; j < cols1; ++j)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix: ");
    for (int i = 0; i < row1; ++i)
    {
        for (int j = 0; j < cols1; ++j)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < row1; ++i)
    {
        for (int j = 0; j < cols1; ++j)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Result from summation of the matrix is :\n ");
    for (int i = 0; i < row1; ++i)
    {
        for (int j = 0; j < cols1; ++j)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}