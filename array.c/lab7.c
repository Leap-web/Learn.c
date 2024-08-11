#include <stdio.h>
#define o 3
int main(){
    int a[o];
    printf("The values %d stores into the array are : ", o);
    for (int i = 0; i < o; i++){
        scanf("%d", &a[i]);
    }

    
    
    printf("\n\nThe values stores into the array in reverse are : ");
    for(int i = o -1; i >= 0; i--){

        printf(" %d ", a[i]);
    }
    printf("\n\n");
    return 0; 
}