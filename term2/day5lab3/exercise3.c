#include <stdio.h>
#include <string.h>

void filter ( char *str, char c){
char strn[100];
int buffer =  0; 

for (int i=0; i<strlen(str); i++ ){
    if ( str[i] != c ){
        strn[buffer++] = str[i];
    }
}
strcpy(str, strn);
}
int main(){
    char string[100];
    char filerter; 

    printf("Enter a string : ");
    gets(string);

    printf("Enter a Filter character : ");
    scanf("%c", &filerter);

    filter(string, filerter);

    printf("\n\nFilter string : %s", string);

    return 0; 
}



