#include <stdio.h>
#include "shreaoskar.h"

int main(int argc, char **argv) {
    intro(argv[0]);
    float marks[4];
    float totalMarks = 0.0, average, tmpf;
    char grade;
    int iterator;

    printf("Enter the marks of a student in 4 subjects: ");
    scanf("%f %f %f %f", &marks[0], &marks[1], &marks[2], &marks[3]);

    for (iterator = 0; iterator < 4; iterator++) {
       tmpf = marks[iterator];
        if (tmpf > 100.0 || tmpf < 0.0) {
            fprintf(stderr, "\n[ ERROR ] Value for marks %d is outside the valid range.\n", iterator + 1);
            return 1;
        }
        totalMarks += tmpf;
    }
    average = totalMarks / 4;

    if (average < 40.0) {
        grade = 'F';
    } else if (average <= 50.0) {
        grade = 'E';
    } else if (average <= 60.0) {
        grade = 'D';
    } else if (average <= 70.0) {
        grade = 'C';
    } else if (average <= 80.0) {
        grade = 'B';
    } else if (average <= 90.0) {
        grade = 'A';
    } else grade = 'O';

    printf("Total Marks: %.1f\nAverage: %.1f\nGrade: %c", totalMarks, average, grade);
    author();
    return 0;
}
