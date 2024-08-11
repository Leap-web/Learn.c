#include <stdio.h>
#include <string.h>

struct class{
    char name[30];
    int level;
    char grade[30];
    char student[30];
};

int main(){
    struct class class1;
    struct class class2;

    strcpy(class1.name, "class1");
    class1.level = 12;
    strcpy(class1.grade, "A");
    strcpy(class1.student, "54 students");

    strcpy(class2.name, "class2");
    class2.level = 11; 
    strcpy(class2.grade, "B");
    strcpy(class2.student, "48 students");

    printf("%s", class1.name);
    printf("\n%d", class1.level);
    printf("\n%s", class1.grade);
    printf("\n%s", class1.student);

    printf("\n\n%s", class2.name);
    printf("\n%d", class2.level);
    printf("\n%s", class2.grade);
    printf("\n%s", class2.student);


    return 0;
}

