3. Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.


    #include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    int marks[3];
    float total;
    float percentage;
};

int main() {
    int numStudents, i, j;
    struct Student s1;
        printf("Enter Roll Number: ");
        scanf("%d", &s1.rollNumber);
        printf("Enter Name: ");
        scanf(" %[^\n]s", s1.name);
        printf("Enter Marks of 3 Subjects:\n");
        for (j = 0; j < 3; j++) {
            scanf("%d", &s1.marks[j]);
            s1.total += s1.marks[j];
        }
        s1.percentage = s1.total / 3;
        printf("Roll Number: %d\n", s1.rollNumber);
        printf("Name: %s\n", s1.name);
        printf("Marks: ");
        for (j = 0; j < 3; j++) {
            printf("%d ", s1.marks[j]);
        }
        printf("\nTotal Marks: %.2f\n", s1.total);
        printf("Percentage: %.2f%%\n", s1.percentage);
    return 0;
}