#include <stdio.h>

int main(){

    int user_input, found = 0; 

    printf("Enter the number in the array to search for: ");
    scanf("%d", &user_input);

    int arr[] = {32, 234, 52, 6, 7, 54, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    for( int i =0; i<size; i++){
        if( user_input == arr[i]){
            found =1;
            break;
        }
    }
    if ( found == 1){
        printf("%d is found in the array", user_input);
    }
    else{
        printf("%d is not found in the array", user_input);    
    }


    return 0;
}