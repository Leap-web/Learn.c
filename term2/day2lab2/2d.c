#include <stdio.h>
int main(){
    int matrix1[3][3] = {{44, 33, 22}, {99, 55, 77}, {22, 11.66}};
    int matrix2[3][3] = {{40, 30, 20}, {90, 50, 70}, {20, 10, 60}}; 
    int matrix3[3][3];
    for (int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
        matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    } 
    printf("The new matrix would be: \n");
    for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
    printf("%d\t", matrix3[i][j]);
}
    printf("\n");
}
    return 0;
    }



