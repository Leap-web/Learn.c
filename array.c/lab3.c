#include <stdio.h>
int main(){
    int array1[5] = { 5, 6, 3, 5, 8};
    int array2[5] = { 4, 6, 3, 2, 3};
    int array3[5];
    int l;
    for( l=0; l<5; l++){
        array3[l] = array1[l] + array2[l];
    }
    printf("The answer after the summation is : { ");
    for(l=0; l<5; l++){
        printf("%d", array3[l]);
        if( l < 5-1){
        printf(" , ");
    }
    }
    printf(" }\n");
    return 0;
}

