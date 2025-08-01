#include "student.h"
#include <stdio.h>

int isPerfect(int num);

int main() {
    int start, end, i;

    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Perfect numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i > 0 && isPerfect(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    
    author();
    return 0;
}

int isPerfect(int num) {
    int sum = 0;
    int i;

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num)
        return 1; // Perfect number
    else
        return 0; // Not perfect
}
