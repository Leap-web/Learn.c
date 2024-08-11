#include <stdio.h>

int main(){
    int arr[4] = { 23,323,23,32};
    int n = 4;

    printf("The original array is : ");
    for( int i =0; i<4; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");

    for(int i =0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[ n -1 -i];
        arr [ n -1 -i] = temp;
    }
    
    printf("The array after reversing is : ");
    for( int i =0; i< n; i++){
        printf(" %d ", arr[i]);
    }
    return 0;
}