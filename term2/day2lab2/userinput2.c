#include <stdio.h>
int main(){
    int user_input1, user_input2;
    while (1){
    printf("Enter a number of element in arrays 1 : ");
    scanf("%d",&user_input1);
    printf("Enter a number of element in arrays 2: ");
    scanf("%d",&user_input2);
        if(user_input1 == user_input2){
            break;
    }else {
      printf("The number of elements must be equal to the number of elements. \nPls Enter again brother\n");
    }
    }
    int arr1[user_input1], arr2[user_input2], sum[user_input1], subtract[user_input1];

    for(int i = 0; i < user_input1; i++){
        printf("Enter the %d element of array 1: ",i+1);
        scanf("%d",&arr1[i]);
    }
    for(int i = 0; i<user_input2; i++){
        printf("Enter the %d element of array 2 : ", i+1);
        scanf("%d",&arr2[i]);
    }
    for(int i = 0; i<user_input1; i++){
         sum[i] = arr1[i] + arr2[i];
         subtract[i] = arr1[i] - arr2[i];
    }
    printf("The new array from sum is : { ");
    for(int i=0; i<user_input1; i++){
        printf("%d",sum[i]);
        if (i < user_input1-1){
        printf(", ");
    }
    }
    printf("}\n");

    printf("The new array from subtracting is : { ");
    for(int i=0; i<user_input1; i++){
        printf("%d ",subtract[i]);
        if (i < user_input1-1){
        printf(", ");
    }
    }
    printf(" }\n ");
    return 0;
}


            
    
            