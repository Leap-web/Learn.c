#include <stdio.h>

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
        return sum;
}
int main()
{
    while (1)
    {
        int n;
        printf("Enter the number for sum: ");
        scanf("%d", &n);
        if (n > 0)
        {
            printf("The sum is: %d\n", sum(n));
            break;
        }
        else{
            printf("The n number must be positive\n");
        }
        
        }
        
    
    return 0;
}


           
        
