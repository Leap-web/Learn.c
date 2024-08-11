#include <stdio.h>

int main(){
    int arr[9] = { 3444441,313143,145,541244,312,43121214,242,2,32};
    int max = arr[0];

    for( int i = 0; i<9; i++){
        if( arr [i] > max){
            max = arr[i];
        }
    }
    printf("Largest element : %d\n", max);

    return 0;
}