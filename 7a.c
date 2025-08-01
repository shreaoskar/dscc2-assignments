#include "student.h"
#include <stdio.h>

#define MAX 10

void readMatrix(int matrix[MAX][MAX], int rows, int cols);
void displayMatrix(int matrix[MAX][MAX], int rows, int cols);

int main() {
    int A[MAX][MAX], B[MAX][MAX], Sum[MAX][MAX];
    int rows, cols, i, j;

    printf("Enter number of rows and columns (max %d): ", MAX);
    scanf("%d%d", &rows, &cols);

    if (rows <= 0 || cols <= 0 || rows > MAX || cols > MAX) {
        printf("Invalid matrix size.\n");
        
        author();
        return 1;
    }

    printf("\nMatrix A:\n");
    readMatrix(A, rows, cols);

    printf("\nMatrix B:\n");
    readMatrix(B, rows, cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMatrix A:\n");
    displayMatrix(A, rows, cols);

    printf("\nMatrix B:\n");
    displayMatrix(B, rows, cols);

    printf("\nSum of A and B:\n");
    displayMatrix(Sum, rows, cols);

    author();
    return 0;
}


void readMatrix(int matrix[MAX][MAX], int rows, int cols) {
    int i, j;
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
