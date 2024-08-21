#include <stdio.h>
#include <stdlib.h>

int concatenateFiles(const char *file1, const char *file2, const char *outputFile) {
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");
    FILE *fpOut = fopen(outputFile, "w");

    if (fp1 == NULL || fp2 == NULL || fpOut == NULL) {
        printf("Error opening files.\n");
        if (fp1) fclose(fp1);
        if (fp2) fclose(fp2);
        if (fpOut) fclose(fpOut);
        return 1;
    }

    // Copy contents of first file to output file
    char ch;
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fpOut);
    }

    // Copy contents of second file to output file
    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fpOut);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fpOut);
    return 0;
}

int displayFileContent(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file: %s\n", filename);
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}

int main() {
    char file1[100], file2[100], outputFile[100];

    printf("Input the first file: ");
    scanf("%s", file1);
    printf("Input the second file: ");
    scanf("%s", file2);
    printf("Input a file: ");
    scanf("%s", outputFile);

    if (concatenateFiles(file1, file2, outputFile) != 0) {
        return 1;
    }

    printf("Contents of %s:\n", outputFile);
    if (displayFileContent(outputFile) != 0) {
        return 1;
    }

    return 0;
}
