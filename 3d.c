#include <stdio.h>

int main() {
    unsigned int termCount, iterator;
    unsigned int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%u", &termCount);

    printf("Fibonacci Series up to %u terms:\n", termCount);

    for (iterator = 0; iterator < termCount; iterator++) {
        if (iterator == 0)
            next = first;
        else if (iterator == 1)
            next = second;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%u ", next);
    }
    return 0;
}
