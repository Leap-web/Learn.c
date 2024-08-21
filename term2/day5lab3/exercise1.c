#include<stdio.h>
void addition(int*, int); /* Prototype */
void addition(int *a, int b){
    *a = *a + b; // incorrect change by add * to a 
}
int main(){
    int a = 9;
    int b = 2;
    /* pointer point to NULL */
    int *p_a = &a; // incorrect pointer to &a value 
    //display a, b
    printf("Before swap: (a:%d, b:%d)\n", *p_a, b); // incorrect, add *p_a 
    /* swap value of a and b */
    *p_a = a + b; // incorrect add indirect operator to every (p_a) in line 14-18 
    b = *p_a - b; 
    a = *p_a - b;
    /* display a, b */
    printf("After swap: (a:%d, b:%d)\n", *p_a, b); 
    /* pointer point to b */
    int *p_b= &b; // incorrect add address of operator (&) to b 
    /* display a, b */
    printf("Before sum: (a:%d, b:%d)\n", *p_a, *p_b); // incorrect add  * to p_a and p_b cuz we want value not address
    /* a equal to a + b */
    addition(&a, b); // incorrect need to add address ( & ) of a 
    /* display a, b */
    printf("After sum: (a:%d, b:%d)\n",*p_a, *p_b); // incorrect same as line 22
    return 0;
}
