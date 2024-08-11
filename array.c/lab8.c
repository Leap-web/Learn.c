#include <stdio.h>

int main(){
    int array[7] = { 2,432,232,2323,2323,344,23553};
    int sum = 0; 

    for( int i =0; i < 7; i++){
        sum += array[i];
    }
    printf("The sum of the array is : %d\n", sum);

    return 0;
}