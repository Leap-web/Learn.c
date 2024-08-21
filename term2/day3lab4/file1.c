#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *file; char fileName[90];
    char ch;
    printf("Input the source file: ");
    scanf("%s", fileName);
    file = fopen(fileName, "r");
    if (file == NULL){
        printf("Doesn't have file");
        exit(16);
    } 
    while((ch = fgetc(file)) != EOF){
       putchar(ch);
    }
    fclose(file);
    return 0;
    
}
        
    
