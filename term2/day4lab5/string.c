#include <stdio.h>
#include <string.h>

// Function to check if a character exists in a string
int charExists(char str[], char ch) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    char str[100];
    char ch;

    // Get string input from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';      // Remove the trailing newline character

    // Get character input from user
    printf("Enter a character to search for: ");
    scanf("%c", &ch);

    // Check if the character exists in the string
    if (charExists(str, ch)) {
        printf("The character '%c' exists in the string.\n", ch);
    } else {
        printf("The character '%c' does not exist in the string.\n", ch);
    }

    return 0;
}
