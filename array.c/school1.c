#include <stdio.h>

int main(){
    int user_input1, user_input2;
    while(1){
        printf("Enter the number elements of the array 1: ");
        scanf("%d", &user_input1);
        printf("\nEnter the number elements of the array 2: ");
        scanf("%d", &user_input2);
        if( user_input1 == user_input2){
            break;
        }
        else {
            printf("\nThe number of elements of each array must be the same.");
            printf("\nPlease re-enter the number elements of the array\n");
        }
    }
    int arr1[user_input1], arr2[user_input2], sum[user_input1], subtract[user_input1];

    for( int i = 0; i < user_input1; i++){
        printf("Enter the %d elements of the array : ", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("\n");

    for(int i = 0; i<user_input2; i++){
        printf("Enter the %d elements of the array : ", i+1);
        scanf("%d", &arr2[i]);
    }

    for(int i =0; i<user_input1; i++){
        sum[i] = arr1[i] + arr2[i];
        subtract[i] = arr1[i] - arr2[i];
    }
        printf("The new array after the summation is : { ");
        for(int i=0; i<user_input1; i++){
            printf("%d", sum[i]);
            if( i < user_input1 -1 ){
                printf(",");
            }
        }
        printf(" }\n ");

        printf("The new array after the subtraction is : { ");
        for(int i =0; i<user_input2; i++){
            printf("%d", subtract[i]);
            if( i< user_input1 - 1){
            printf(",");
            }
        }
        printf(" }\n");
return 0;
}
