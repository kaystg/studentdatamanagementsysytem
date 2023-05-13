#include <stdio.h>

#define MAX_STUDENTS 100 // Maximum number of students

struct Student {
    char name[100];
    int roll;
    float marks;
    char grade;
};

int main() {
    int i, numStudents;
    struct Student students[MAX_STUDENTS];

    // Get the number of students from user
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Get data for each student
    for (i = 0; i < numStudents; i++) {
        printf("Enter name for student %d: ", i+1);
        scanf("%s", students[i].name);

        printf("Enter roll number for student %d: ", i+1);
        scanf("%d", &students[i].roll);

        printf("Enter marks for student %d: ", i+1);
        scanf("%f", &students[i].marks);

        // Calculate the grade
        if (students[i].marks >= 90) {
            students[i].grade = 'A';
        } else if (students[i].marks >= 80) {
            students[i].grade = 'B';
        } else if (students[i].marks >= 70) {
            students[i].grade = 'C';
        } else if (students[i].marks >= 60) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }
    }

    // Display the data for each student
    printf("\n");
    printf("Student data:\n");
    for (i = 0; i < numStudents; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll number: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
        printf("Grade: %c\n", students[i].grade);
        printf("\n");
    }

    return 0;
}
