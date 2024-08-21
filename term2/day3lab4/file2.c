#include <stdio.h>
#include <string.h>
int main() {
    // declare variables for file names and characters 
    char sourceFile[100], destFile[100];
    char c;
    
    printf("Input the source file: ");
    scanf("%s", sourceFile);
    printf("Input the destination file: ");
    scanf("%s", destFile);
    // check source and destination files are the same or not
    if (strcmp(sourceFile, destFile) == 0) {
        printf("Error! Same name.\n"); // if not print this
        return 1;
    }
    // open file in read mode
    FILE *src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error! No source file.\n");
        return 1; //exit the program
    }
    // open destination in write mode 
    FILE *dst = fopen(destFile, "w");
    if (dst == NULL) {
        fclose(src);
        printf("Error! Cannot create destination file.\n");
        return 1;
    }
    // copy source file to destination file , characters by characters
    while ((c = fgetc(src)) != EOF) {
        fputc(c, dst);
    }
    
    fclose(src);
    fclose(dst);
    
    // Open source file again to print its contents
    src = fopen(sourceFile, "r");
    printf("Contents of source file:\n");
    while ((c = fgetc(src)) != EOF) {
        printf("%c", c);
    }
    fclose(src);

    // Open destination file to print its contents
    dst = fopen(destFile, "r");
    printf("\nContents of destination file:\n");
    while ((c = fgetc(dst)) != EOF) {
        printf("%c", c);
    }
    fclose(dst);
    
    return 0;
}

