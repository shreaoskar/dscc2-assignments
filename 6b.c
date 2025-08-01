#include "student.h"
#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int input[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    int evenPos[n], oddPos[n]; 
    int evenCount = 0, oddCount = 0;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            evenPos[evenCount++] = input[i];
        } else {
            oddPos[oddCount++] = input[i];
        }
    }

    printf("\nOriginal Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", input[i]);
    }

    printf("\n\nElements at Even Positions: ");
    for(int i = 0; i < evenCount; i++) {
        printf("%d ", evenPos[i]);
    }

    printf("\nElements at Odd Positions: ");
    for(int i = 0; i < oddCount; i++) {
        printf("%d ", oddPos[i]);
    }

    printf("\n");
    
    author();
    return 0;
}
