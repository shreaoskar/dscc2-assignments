#include <stdio.h>

int main() {
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
    return 0;
}
