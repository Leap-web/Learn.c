#include <stdio.h>
#include <string.h>

typedef struct room{
    char name[100];
    char typeof_party[100];
    char guest_total[100];
    char date[100];
    char time[100];
    int price;

};
int main(){
    struct room Vip_room = {"Vip_room", "Sing_relax", "7 guests", "26August", "7-8:30pm", 340 };
    struct room Deluxe_room = {"Deluxe_room", "Stem_listen a song", "12 guests", "26August", "7-8:30pm", 280 };
    struct room Standard_room = {"Standard_room", "Kissing_sleep", "2 guests", "26August", "7-8:30pm", 190};
    struct room Normal_room = {"Normal_room", "Sing_karaoke", "15 guest", "26August", "7-8:30pm",120};


    printf("Welcome to the different types of rooms");
    printf("\n\nPlease choose a room to enjoy on my birthday");
    printf("\n1. Vip_room\n2. Deluxe_room\n3. Standard_room\n4. Normal_room\n");
    printf("\n\nSelect your option here : ");
    int choice; 
    scanf("%d", &choice);
    switch(choice){
        case 1:
            system("cls");
            printf("Vip_room details\n");
            printf("Name: %s\n", Vip_room.name);
            printf("Type of party: %s\n", Vip_room.typeof_party);
            printf("Number of guests: %s\n", Vip_room.guest_total);
            printf("Date: %s\n", Vip_room.date);
            printf("Time: %s\n", Vip_room.time);
            printf("Price: $%.2ld\n", Vip_room.price);
            break;
        case 2:
            system("cls");
            printf("Deluxe_room details\n");
            printf("Name: %s\n", Deluxe_room.name);
            printf("Type of party: %s\n", Deluxe_room.typeof_party);
            printf("Number of guests: %s\n", Deluxe_room.guest_total);
            printf("Date: %s\n", Deluxe_room.date);
            printf("Price : $%.2ld\n", Deluxe_room.price);
            break;
        case 3: 
            system("cls");
            printf("Standard_room details\n");
            printf("Name : %s\n", Standard_room.name);
            printf("Type of party: %s\n", Standard_room.typeof_party);
            printf("Number of guests: %s\n", Standard_room.guest_total);
            printf("Date: %s\n", Standard_room.date);
            printf("Price : $%.2ld\n", Standard_room.price);
            break;
        case 4: 
            system("cls");
            printf("Normal_room details\n");
            printf("Name : %s\n", Normal_room.name);
            printf("Type of party: %s\n", Normal_room.typeof_party);
            printf("Number of guests: %s\n", Normal_room.guest_total);
            printf("Date: %s\n", Normal_room.date);
            printf("Price : $%.2ld\n", Normal_room.price);
            break;
        default : 
        system("cls");
        printf("\n\nThere no such of room you want.");

        
    }
    return 0;
}