#include <stdio.h>
#include <string.h>

typedef struct {
    char title[100];
    char author[50];
    int rating;
} Book;

void input_books(Book *books, int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter information for book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]s", books[i].title);  // Read until newline
        printf("Author: ");
        scanf(" %[^\n]s", books[i].author);  // Read until newline
        printf("Rating (1-5): ");
        scanf("%d", &books[i].rating);
    }
}

void display_high_rated_books(Book *books, int count) {
    printf("\nBooks with a rating of 3 or higher:\n");
    for (int i = 0; i < count; i++) {
        if (books[i].rating >= 3) {
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Rating: %d\n\n", books[i].rating);
        }
    }
}

int main() {
    int book_count;
    printf("Enter the number of books: ");
    scanf("%d", &book_count);

    Book books[book_count];

    input_books(books, book_count);
    display_high_rated_books(books, book_count);

    return 0;
}
