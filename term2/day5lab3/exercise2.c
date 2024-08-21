#include <stdio.h>

void Power(float *x, const int n){
    float result = 1.0; // store the cumulative product of x 
    for ( int i = 0; i < n; i++){
        result *= *x;
    }
    *x = result;
}
int main(){
    float x;
    int y;
    printf("Enter a number(x): ");
    scanf("%f", &x);

    printf("Enter the power (y): ");
    scanf("%d", &y);

    Power(&x, y);

    printf("Result : %f\n", x);
    return 0;
}