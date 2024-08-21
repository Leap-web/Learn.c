#include <stdio.h>
int main(){
    int userInput;
    printf("How many names : ");
    scanf("%d", &userInput);

    char name[userInput][100];
    for(int i = 0; i < userInput; i++){
        printf("Enter name : ", i+1);
        scanf("%s", name[i]);
        
    }
   printf("Those names are : ");
   for (int i=0; i<userInput; i++){
    if ( i == userInput-1 ) {
    printf("and %s", name[i]);
    }
    else {
        printf(" %s ", name[i]);
}
   }
    return 0;    
}

   

   

    
