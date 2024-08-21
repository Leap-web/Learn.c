#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function to reserve seats and update the file
void seatSV(int seats, char *file2, float price, char *bus) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t); 
    FILE *file = fopen(file2, "r");
    if (file == NULL) {
        printf("Can't open the file %s\n", file2);
        exit(0);
    }

    int buffer;
    int seatArray[seats];
    int index = 0;

    // Read the seats from the file into the array
    while (fscanf(file, "%d", &buffer) != EOF) {
        seatArray[index++] = buffer;
    }
    fclose(file);

    while (1) {
        system("cls");
        printf("\n---------------Available seats of %s---------------\n", bus);
        for (int i = 0; i < seats; i++) {
            if (i % 4 == 0 && i != 0) {
                printf("\n");
            }
            if (seatArray[i] == 1) {
                printf(" X ");
            } else {
                printf(" %d ", seatArray[i]);
            }
            if (i % 2 == 1) {
                printf("\t");
            }
        }
        printf("\n");
        printf("Enter number of seats you want to reserve: ");
        int n;
        scanf("%d", &n);

        // Ensure n is a positive number less than or equal to the number of seats
        if (n <= 0 || n > seats) {
            printf("Invalid number of seats. Please try again.\n");
            continue;
        }

        // Ask the user to enter the seat numbers they want to reserve
        int unavailable[n];
        for (int i = 0; i < n; i++) {
            printf("Reserve number: ");
            scanf("%d", &unavailable[i]);

            // Check if the seat number is available
            int found = 0;
            for (int j = 0; j < seats; j++) {
                if (seatArray[j] == unavailable[i]) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Error: Seat %d is not available. Please try again.\n", unavailable[i]);
                i--; // decrement i to ask for the seat number again
                continue;
            }
        }

        // Calculate price with tax and confirm reservation
        float totalPrice = price * n;
        float tax = totalPrice * 0.1;
        float finalPrice = totalPrice + tax;

        printf("\n------------------------------Reservation details-------------------------------\n");
        printf("Total price: $%.2f\n", totalPrice);
        printf("Tax (10%%): $%.2f\n", tax);
        printf("\n\nFinal price: $%.2f\n", finalPrice);

        char confirm;
        printf("\n\nDo you want to confirm the reservation? (y/n): ");
        scanf(" %c", &confirm);

        if (confirm == 'y' || confirm == 'Y') {
            // Update the seatArray for reserved seats
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < seats; j++) {
                    if (seatArray[j] == unavailable[i]) {
                        seatArray[j] = 1;

                        // Add timestamp
                        printf("Reserved seat %d on %d-%02d-%02d %02d:%02d:%02d\n",
                               unavailable[i],
                               tm.tm_year + 1900,
                               tm.tm_mon + 1,
                               tm.tm_mday,
                               tm.tm_hour,
                               tm.tm_min,
                               tm.tm_sec);
                    }
                }
            }
            // Write the updated seats back to the file
            file = fopen(file2, "w");
            for (int i = 0; i < seats; i++) {
                fprintf(file, "%d\n", seatArray[i]);
            }
            fclose(file);
            break; // Exit the loop after successful reservation
        } else {
            printf("\nReservation cancelled.\n");
            continue; // Continue to ask for seat reservations
        }
    }
}

// Main function to display the menu and call the seatSV function
void SVmain() {
    int choice = -1; // Initialize choice to a value that isn't 0

    int seat1 = 56;
    char file1[25] = "SVseat1.txt";
    char bus1[40] = "56-passenger luxury coach";
    float price1 = 14.5;

    int seat2 = 40;
    char file2[25] = "SVseat2.txt";
    char bus2[40] = "40-passenger standard coach";
    float price2 = 13;

    int seat3 = 16;
    char file3[25] = "SVseat3.txt";
    char bus3[40] = "16-passenger Mini-bus";
    float price3 = 10;

    int seat4 = 12;
    char file4[25] = "SVseat4.txt";
    char bus4[40] = "12-passenger Luxury Van";
    float price4 = 12;

    while (choice != 0) {
        system("cls");
        FILE *file = fopen("pp_sv.txt", "r");
        if (file == NULL) {
            printf("Can't open the file pp_sv.txt\n");
            exit(0);
        }
        char buffer[255];
        while (fgets(buffer, sizeof(buffer), file)) {
            printf("%s", buffer);
        }
        fclose(file);

        scanf("%d", &choice);
        switch (choice) {
            case 1:
                seatSV(seat1, file1, price1, bus1);
                getch();
                break;
            case 2:
                seatSV(seat2, file2, price2, bus2);
                getch();
                break;
            case 3:
                seatSV(seat3, file3, price3, bus3);
                getch();
                break;
            case 4:
                seatSV(seat4, file4, price4, bus4);
                getch();
                break;
            case 0:
                system("cls");
                break;
            default:
                printf("Invalid choice.\n\nPlease try again.");
                break;
        }
    }
}

