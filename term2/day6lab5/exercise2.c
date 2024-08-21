#include <stdio.h>
#include <string.h>

struct address {
    char home[20];
    char st[20];
    char city[10];
};

struct seller {
    char name[40];
    struct address Address;
};

typedef struct {
    int id;
    char name[50];
    char product_date[50];
    char expire_date[50];
    char color[50];
    struct seller Seller;
} Product;

int main() {
    int amount;
    printf("Enter the number of products: ");
    scanf("%d", &amount);

    Product products[amount];
    char colors[5][50] = {"Red", "Green", "Blue", "Yellow", "White"};

    for (int i = 0; i < amount; i++) {
        printf("\nProduct %d:\n", i + 1);

        printf("Enter product name: ");
        scanf("%s", products[i].name);

        printf("Enter product ID: ");
        scanf("%d", &products[i].id);

        printf("Enter product date (YYYY-MM-DD): ");
        scanf("%s", products[i].product_date);

        printf("Enter product expiration date (YYYY-MM-DD): ");
        scanf("%s", products[i].expire_date);

        int invalidColor;
        do {
            printf("Enter product color: ");
            scanf("%s", products[i].color);

            invalidColor = 1;
            for (int j = 0; j < 5; j++) {
                if (strcmp(colors[j], products[i].color) == 0) {
                    invalidColor = 0;
                    break;
                }
            }

            if (invalidColor) {
                printf("\nInvalid color. \nAvailable colors: Red, Green, Blue, Yellow, White.\n");
            }
        } while (invalidColor);

        printf("Enter seller's name: ");
        scanf("%s", products[i].Seller.name);

        printf("Enter seller's home address: ");
        scanf("%s", products[i].Seller.Address.home);

        printf("Enter seller's street address: ");
        scanf("%s", products[i].Seller.Address.st);

        printf("Enter seller's city: ");
        scanf("%s", products[i].Seller.Address.city);
    }

    printf("\n\n++++++++++++++++++++<<< Product List >>>+++++++++++++++++++++++\n");
    for (int i = 0; i < amount; i++) {
        printf("\nID: %d\n", products[i].id);
        printf("Name of product: %s\n", products[i].name);
        printf("Date of produce for the product: %s\n", products[i].product_date);
        printf("Date of expire for the product: %s\n", products[i].expire_date);
        printf("Color of the product: %s\n", products[i].color);
        printf("Seller name: %s\n", products[i].Seller.name);
        printf("\n---------- Seller address ----------\n");
        printf("Seller house: %s\n", products[i].Seller.Address.home);
        printf("Seller street: %s\n", products[i].Seller.Address.st);
        printf("Seller city: %s\n", products[i].Seller.Address.city);
        printf("----------------------------------------\n");
    }

    return 0;
}
