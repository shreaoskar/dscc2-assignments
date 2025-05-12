#include <stdio.h>
#include "shreaoskar.h"

int main(int argc, char **argv) {
    intro(argv[0]);

    int number, x, y = 0;
    printf("Enter Your Number: ");
    scanf("%d", &number);

    for (int i = number; i > 0;) {
        x = i % 10;
        y = y * 10 + x;
        i = i / 10;
    }

    if (y == number) {
        printf("Your number is a Palindrome!");
    } else {
        printf("Your number is not a Palindrome.");
    }

    author();
    return 0;
}
