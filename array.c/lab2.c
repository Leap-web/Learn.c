#include <stdio.h>
int main(){
    int positive[10] = {2, 4, 5, 6, 6, 8, 5, 6, 5, 10};
    for (int i = 0; i < 10; i++)
    {
        printf("The value in positive of each index %d is : %d\n", i, positive[i]);
    }
    return 0;
}
