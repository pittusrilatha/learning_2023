4. Write a function to sort the array of structures in descending order based on marks 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};
    void sortStudents(struct Student* students, int size) {
    struct Student temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void parseString(char* inputString, struct Student* students, int size) {
    char* token;
    token = strtok(inputString, " ");

    for (int i = 0; i < size; i++) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, " ");
        strcpy(students[i].name, token);

        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        token = strtok(NULL, " ");
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); 

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    char inputString[100];
    printf("Enter the student details: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';  

    parseString(inputString, students, size);

    sortStudents(students, size);

    printf("\n");

    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);
    

    return 0;
}