#include<stdio.h>

typedef struct {
  int id;
  char surname[50];
  char name[50];
  int age;
} Student;

int youngest(Student *students) {
  int young = 0;
  for (int i = 0; i < 10; i++) {
    if (students[i].age < students[young].age) {
      young = i;
    }
  }
  return young;
}

int main() {
  Student students[10];
  for (int i = 0; i < 10; i++) {
    printf("Enter information of student %d\n", i+1);
    students[i].id = i+1;
    printf("Enter surname: ");
    scanf("%s", students[i].surname);
    printf("Enter name: ");
    scanf("%s", students[i].name);
    printf("Enter age: ");
    scanf("%d", &students[i].age);
  }

  int young = youngest(&students);
  printf("%s %s is the youngest age %d", students[young].surname, students[young].name, students[young].age);

  return 0;
}