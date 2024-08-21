#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char surname[50];
    char name[50];
    int age;
    char gender;
} Student;

int Gender(char g) {
    return (g == 'm' || g == 'M' || g == 'f' || g == 'F');
}

void createStudent(int n) {
    FILE *file = fopen("student.txt", "a");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    Student student;
    for (int i = 0; i < n; i++) {
        system("cls");
        printf("\nEnter information of student %d\n", i + 1);
        student.id = i + 1;

        printf("Enter surname: ");
        scanf("%s", student.surname);

        printf("Enter name: ");
        scanf("%s", student.name);

        printf("Enter age: ");
        scanf("%d", &student.age);

        getchar();  // To consume the newline character left by previous scanf
        int validGender = 0;
        while (!validGender) {
            printf("Enter gender (m/f): ");
            scanf("%c", &student.gender);
            getchar();  // To consume the newline character left by scanf
            if (Gender(student.gender)) {
                validGender = 1;
            } else {
                printf("Wrong gender. Please enter 'm', 'M', 'f', or 'F'.\n");
            }
        }

        fprintf(file, "%d %s %s %d %c\n", student.id, student.surname, student.name, student.age, student.gender);
    }

    fclose(file);
}

void deleteStudent() {
    FILE *file = fopen("student.txt", "r");
    if (file == NULL) {
        printf("No students to delete.\n");
        return;
    }

    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Unable to open temporary file.\n");
        fclose(file);
        return;
    }

    Student student;
    int id;
    printf("Enter id to delete: ");
    scanf("%d", &id);
    int found = 0;

    while (fscanf(file, "%d %s %s %d %c", &student.id, student.surname, student.name, &student.age, &student.gender) != EOF) {
        if (student.id != id) {
            fprintf(tempFile, "%d %s %s %d %c\n", student.id, student.surname, student.name, student.age, student.gender);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    if (!found) {
        printf("Student with id %d not found.\n", id);
        remove("temp.txt");
    } else {
        remove("student.txt");
        rename("temp.txt", "student.txt");
        printf("Student with id %d deleted.\n", id);
    }
}

void displayStudent() {
    FILE *file = fopen("student.txt", "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    Student student;
    printf("\nDisplay Students\n");
    while (fscanf(file, "%d %s %s %d %c", &student.id, student.surname, student.name, &student.age, &student.gender) != EOF) {
        printf("\nID: %d\nSurname: %s\nName: %s\nAge: %d\nGender: %c\n", student.id, student.surname, student.name, student.age, student.gender);
    }

    fclose(file);
}

int main() {
    int n, choice;
    while (1) {
        printf("\n===============Student program================\n");
        printf("1. Add student\n");
        printf("2. Delete student\n");
        printf("3. Display students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            system("cls");
            printf("Enter number of students: ");
            scanf("%d", &n);
            createStudent(n);
            break;
        case 2:
            system("cls");  
            printf("Deleting student...\n");  // Simulating deletion process
            deleteStudent();
            break;
        case 3:
            system("cls");
            printf("Displaying students...\n");  // Simulating display process
            displayStudent();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
