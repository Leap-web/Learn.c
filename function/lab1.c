#include <stdio.h>
#include <string.h>

void compare_and_replace(char *word1, char *word2) {
    if (strcmp(word1, word2) == 0) {
        strcpy(word1, word2);
    }
}

int main() {
    char word1[50];
    char word2[50];

    // Get the first word from the user
    printf("Enter the first word: ");
    scanf("%s", word1);

    // Get the second word from the user
    printf("Enter the second word: ");
    scanf("%s", word2);

    // Call the function to compare and potentially replace the word
    compare_and_replace(word1, word2);

    // Print the result
    printf("Resulting first word: %s\n", word1);

    return 0;
}
