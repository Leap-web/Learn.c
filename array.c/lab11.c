#include <stdio.h>

int main(){
    int matrix[2][3] = {{21, 32,13}, {21,423,42}};
    
    printf("Matrix: \n");
    for(int i=0; i<2; i++){
        for(int j =0; j<3; j++){
            printf( "%d ", matrix[i][j]);
        } 
        printf("\n");
    }
}