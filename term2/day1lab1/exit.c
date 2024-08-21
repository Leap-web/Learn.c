#include <stdio.h>
int main(){
    int user_input, found = 0;
    printf("Enter a number: ");
    scanf("%d", &user_input);

    int array[]= {3, -3, 1,5,7,0,8,9,6};
    int sizeofArray = sizeof(array)/sizeof(array[0]);
    for (int i=0; i<sizeofArray; i++) {
        if (array[i] == user_input) {
           found = 1;
           break;
        }
    
}
    if (found == 1) {
        printf("%d is in the array", user_input);
    } else {
        printf("%d is not in the array", user_input);
    }

    return 0;
}