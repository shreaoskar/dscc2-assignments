#include <stdio.h>
#include <ctype.h>
#include "student.h"

void printInitials(char name[]);

int main() {
    char name[100];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printInitials(name);

    author();
    return 0;
}

void printInitials(char name[]) {
    unsigned int len = stringlength(name);
    if (len == 0) {
        fprintf(stderr, "\nprintInitials(): 0 length Name Entry. Nothing to do...\n");
        return;
    }

    int i;
    unsigned int surname_count = 0;

    if (name[len] == ' ') len -= 1;
    for (i = 0; i < len; i++) {
        if (name[i] == ' ') surname_count = len - i - 1;
    }

    if (surname_count == 0) {
        fprintf(stderr, "\nprintInitials(): Mononym Name Entry. Nothing to do...\n");
        return;
    }

    char surname[surname_count + 1];
    for (i = 0; i < surname_count; i++) {
        surname[i] = tolower(name[(len - surname_count) + i]);
    }
    surname[surname_count] = '\0';
    surname[0] = toupper(surname[0]);

    printf("%c. ", toupper(name[0]));
    for (i = 1; i < len - surname_count; i++) {
        if (name[i - 1] == ' ') {
            printf("%c. ", toupper(name[i]));
        }
    }
    printf("%s\n", surname);
}
