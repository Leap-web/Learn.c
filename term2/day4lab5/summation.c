#include <stdio.h>
void summations(int x, int y, int z){
    int sum;
    sum = x + y + z;
    printf("%d", sum);
}
int main(){
    int x, y, z;
    printf("Enter the 3 integers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("The sum is: ");
    summations(x, y, z);
    return 0;
}