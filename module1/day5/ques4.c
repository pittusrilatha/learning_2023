4. write a program to Store Data for n students in Structures Dynamically. 

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    struct Student** students = (struct Student**)malloc(n * sizeof(struct Student*));

    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        students[i] = (struct Student*)malloc(sizeof(struct Student));

        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i]->name);

        printf("Age: ");
        scanf("%d", &(students[i]->age));

        printf("Marks: ");
        scanf("%f", &(students[i]->marks));

        printf("\n");
    }

   
    printf("Student Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i]->name);
        printf("Age: %d\n", students[i]->age);
        printf("Marks: %.2f\n", students[i]->marks);
        printf("\n");
    }

       for (int i = 0; i < n; i++) {
        free(students[i]);
    }
    free(students);

    return 0;
}