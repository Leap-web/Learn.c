#include <stdio.h>

int main()
{
    int user_input;
    printf("How many names you want to called out: ");
    scanf("%d", &user_input);

    char name[user_input][100];
    for (int i = 0; i < user_input; i++)
    {
        printf("Enter name : ", i + 1);
        scanf("%s", name[i]);
    }

    printf("Those names are : ");
    for (int i = 0; i < user_input; i++)
    {
        if (i == user_input - 1)
        {
            printf(" and %s", name[i]);
        }
        else
        {

            printf(" %s", name[i]);
        }
    }

    return 0;
}