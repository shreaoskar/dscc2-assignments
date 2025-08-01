#include "student.h"
#include <stdio.h>

int main() {
    int num;
    int *ptr;
    int **pptr;


    printf("Enter an integer: ");
    scanf("%d", &num);

    ptr = &num;
    pptr = &ptr;

    printf("\nBefore modification:\n");
    printf("Value of num = %d\n", num);


    printf("\nEnter new value to modify using pointer to pointer: ");
    scanf("%d", *pptr);

    printf("\nAfter modification using pointer to pointer:\n");
    printf("Value of num = %d\n", num);

    author();
    return 0;
}
