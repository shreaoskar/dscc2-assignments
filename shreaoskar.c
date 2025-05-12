#include "shreaoskar.h"
#include <string.h>
#include <stdio.h>

void intro(char *programName) {
    printf("\nUniversity of Calcutta\nThe Bhawanipur Education Society College\nDepartment of Computer Science\nSemester II");

    if (strcmp(programName, "./a.out") == 0) {} else {
        printf("\nProgram Number: ");

        int iterator, len = strlen(programName);
        char tmpc;

       #ifdef _WIN32
            for (iterator = 2; iterator < (len - 4); iterator++) {
                tmpc = programName[iterator];
                printf("%c", tmpc);
            }
        #elif __linux__
            for (iterator = 2; iterator <= len; iterator++) {
                tmpc = programName[iterator];
                printf("%c", tmpc);
            }
        #elif __APPLE__
            printf("\nWhy are you here?\n");
        #endif

        printf("\n\n");
    }
}

void author(void) {
    printf("\n\nProgram Author: Shreaoskar Roy\nUID: 1304240002\n");
}
