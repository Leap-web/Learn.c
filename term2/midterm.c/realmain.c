#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "SRmain.h"
#include "SVmain.h"
#include "KDmain.h"
#include "KOMmain.h"
#include "BTBmain.h"

void booking_list();
void available();
void status();
void bulk_file(int option);
void sleeping();
void SRmain();
void SVmain();
void KDmain();
void KOMmain();
void BTBmain();

char name[32][100], ch[10][100] = {"Route 1", "Route 2", "Route 3", "Route 4", "Route 5", "Route 6", "Route 7", "Route 8", "Route 9", "Route 10"};
int num1[32] = {0};
int j, k;

int main()
{
    char selected;
    char options[4][40] = {"Booking_list", "Show seat available for booking", "Bus Status Board", "Exit"};

    do
    {
        system("cls");
        printf("---------------------------------------------Welcome to our Kleb Jeb Express--------------------------------------------\n");

        // Menu options
        for (int k = 0; k < 4; k++)
        {
            printf("%d. %s\n", k + 1, options[k]);
        }
        printf("=> Select an option: ");
        scanf(" %c", &selected); // Use space before %c to avoid issues with newline characters

        switch (selected)
        {
        case '1':
            system("cls");
            booking_list();
            break;
        case '2':
            system("cls");
            available();
            break;
        case '3':
            system("cls");
            // status();
            break;
        case '4':
            system("cls");
            exit(0);
            break;
        default:
            printf("Invalid option.\n\n <<<<Press any key to go back");
            getch();
        }
        getch();
    } while (selected != '4');
    return 0;
}

void booking_list()
{
    FILE *file;
    char line[256];
    int option;

    file = fopen("routes.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    // Displaying the contents of the file without numbering
    while (fgets(line, sizeof(line), file))
    {
        printf("%s", line);
    }
    fclose(file);

    // Clear the input buffer
    while ((getchar()) != '\n')
        ; // This will clear the buffer

    // Read input
    printf("Please enter a number: ");
    if (scanf("%d", &option) != 1)
    {
        printf("Invalid input.\n");
        return;
    }

    if (option == 0)
    {
        return;
    }
    else if (option > 0)
    {
        bulk_file(option);
    }
    else
    {
        printf("Invalid option.\n");
    }
}

void available()
{
    system("cls");
    printf("---------------------------------------------Seat Availability--------------------------------------------\n");
    printf("Route\tSeats Available\n");
    int choice;
    system("cls");
    printf("\n1. SIEM REAP");
    printf("\n2. SIHANOULK VILLE");
    printf("\n3. MONDULKIRI");
    printf("\n4. KOMPOT ");
    printf("\n5. BATTAMBANG");
    printf("\n\nPick the province you would like to visit : ");
    scanf("%d", &choice);
    while (1)
    {
        switch (choice)
        {
        case 1:
            system("cls");
            SRmain();
            break;
        case 2:
            system("cls");
            SVmain();
            break;
        case 3:
            system("cls");
            KDmain();
            break;
        case 4:
            system("cls");
            KOMmain();
            break;
        case 5:
            system("cls");
            BTBmain();
            break;
        case 6:
            system("cls");
            exit(0);
            break;
        default:
            system("cls");
            printf("\nWrong option\n");
            printf("\n <<<<Press any key to go back");
            break;
        }
    }
}

// void status()
// {
//     system("cls");
//     printf("---------------------------------------------Bus Status Board--------------------------------------------\n");
//     // Add code to display bus status
// }

void bulk_file(int option)
{
    char bulk_route_file[10][30] = {"Nothing", "pp_sv.txt", "pp_sr.txt", "pp_kompot.txt", "pp_btb.txt", "pp_kdmv.txt"};
    system("cls");

    // Open the specified file for reading
    FILE *fptr;
    fptr = fopen(bulk_route_file[option], "r");
    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    char content[1000];

    // Read and print each line from the file
    while (fgets(content, sizeof(content), fptr))
    {
        printf("%s", content);
    }
    fclose(fptr);
}


