#include <stdio.h>
int main(){
    int array[] = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for ( int i =0; i < sizeof(array)/sizeof(array[0]); i++){
        printf(" %d ", array[i]);
    }


    
    return 0;
}