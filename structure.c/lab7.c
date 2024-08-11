#include <stdio.h>
#include <string.h>

typedef struct {
    char title[100];
    char author[50];
    int rating;
} Book;

void input_books(Book *books, int count){
    for(int i=0; i< count; i++){
        printf("Enter book title: ");
        scanf("%[^\n]s", books[i].title);
        printf("Enter book author: ");
        scanf("%[^\n]s", books[i].author);
        printf("Enter book rating (1-10): ");
        scanf("%d", &books[i].rating);
        printf("\n");
    }
}

void display_high_rated_books(Book *books, int count){
    printf("\nBooks with rating of 3 or higher : ");
    for(int i =0; i<count; i++){
        if(books[i].rating >= 3){
            printf("Tile : %s\n", books[i].title);
            printf("Author : %s\n", books[i].author);
            printf("Rating : %d\n", books[i].rating);
        }
    }
}

int main(){
    int book_count;
    printf("Enter the number of books: ");
    scanf("%d", &book_count);

    Book books[book_count];
    input_books(books, book_count);
    display_high_rated_books(books, book_count);
}