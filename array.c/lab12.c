#include <stdio.h>

void printArray( int arr[], int size){
    for ( int i =0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[3] ={ 1, 2, 4};
    printArray( arr, 3);
    return 0;
}