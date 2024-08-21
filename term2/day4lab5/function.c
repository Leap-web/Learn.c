#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n)
{
    if (n <= 0)
        return 1;

    return n * factorial(n - 1);
}

int sum(int n)
{
    int result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += i;
    }
    return result;
}

float sqrtFunc(float n)
{
    return sqrt(n);
}

void prime(int n)
{
    int found = 0;
    if (n == 1)
        found = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            found = 1;
    }
    if (found)
    {
        printf("%d is not Prime\n", n);
    }
    else
    {
        printf("%d is Prime\n", n);
    }
}
int main()
{
    int n, choice;
    float x;
    while (1)
    {
        printf("Operations\n");
        printf("1. Factorial\n");
        printf("2. Summation\n");
        printf("3. Square Root\n");
        printf("4. Prime number\n");
        printf("5. Exit the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("cls");
            printf("Enter a number to calculate factorial: ");
            scanf("%d", &n);
            printf("The result of factorial is %d\n", factorial(n));
            break;
        case 2:
            system("cls");
            printf("Enter a number to calculate summation: ");
            scanf("%d", &n);
            printf("The result of summation is %d\n", sum(n));
            break;
        case 3:
            system("cls");
            printf("Enter a number to calculate square root: ");
            scanf("%f", &x);
            printf("The result of square root is %.2f\n", sqrtFunc(x));
            break;
        case 4:
            system("cls");
            printf("Enter a number to check prime or not: ");
            scanf("%d", &n);
            prime(n);
            break;
        case 5:
            
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
