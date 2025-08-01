#include "student.h"
#include <stdio.h>
#define COUNT 5
int main(void) {
    int count, find, i;
    int array[5] = {5, 6, 8, 9, 11};
    printf("Assignment 6(a): Linear Array Search\n");

    printf("Enter the search element: ");
    scanf("%d", &find);
    
    for(i = 0; i < COUNT; i++) {
        if (array[i] == find) {
            printf("Element Found at Index %d\n", i);
            
            author();
            return 0;
        }
    }
    printf("Element not found\n");
    
    author();
    return 1;
}