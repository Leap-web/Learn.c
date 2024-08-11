#include <stdio.h>
int main(){
    double price[] = { 34.6, 45.6, 532.65, 53.65, 34.5, 43820.233};

    for(int i =0; i<sizeof(price)/sizeof(price[0]); i++){
        printf("$%.2lf\n", price[i]);
    }
    /*
    for ( int i =0; i<5; i++){
        printf("$%.2lf\n", price[i]);
    }
    */
    return 0;
}