#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void shift_left(char *str, int shift)
{
    char strn[100];
    int buffet = 0;
    for (int i = shift; i < strlen(str); i++)
    {
        strn[buffet++] = str[i];
    }
    strcpy(str, strn);
}
int main()
{
    char string[100];
    int filter;

    printf("Enter a string:  ");
    gets(string);

    printf("Filter character: ");
    scanf("%d", &filter);

    if (filter <= 0)
    {
        printf("Error: Filter character should be a positive integer.\n");
        exit(1);
    }

    shift_left(string, filter);

    printf("\nthe %d shift to the left and we got : %s", filter, string);
    return 0;
}
