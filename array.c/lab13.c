#include <stdio.h>

int main(){
    int arr[5], user_input;
    int n=5;
    for( int i=0; i<5; i++){
        printf("Enter the number of elements: ");
        scanf("%d", &arr[i]);
    }
    printf("\n");

    int length = sizeof(arr)/sizeof(arr[0]);
    int temp1 = arr[0];
    int temp2 = arr[0];

    for(int i=0; i<length; i++){
        if(temp1 < arr[i]){
            temp1 = arr[i];
        }
    }

    for( int i=0; i<length; i++){
        if( temp2 > arr[i]){
            temp2 = arr[i];
        }
    }


    printf("The largest elements of the array is : %d\n", temp1);
    printf("The smallest elements of the array is: %d\n", temp2);


    return 0;
}