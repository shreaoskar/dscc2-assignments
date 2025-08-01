#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void readMatrixFromFile(const char *filename, int matrix[100][100], int *rows, int *cols);
bool isDiagonalMatrix(int matrix[100][100], int rows, int cols);
void displayMatrix(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100], rows, cols;
    char filename[] = "matrix.txt";

    readMatrixFromFile(filename, matrix, &rows, &cols);
    displayMatrix(matrix, rows, cols);

    if (isDiagonalMatrix(matrix, rows, cols))
        printf("\nThe matrix is a diagonal matrix.\n");
    else
        printf("\nThe matrix is NOT a diagonal matrix.\n");

    author();
    return 0;
}

void readMatrixFromFile(const char *filename, int matrix[100][100], int *rows, int *cols) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        fprintf(stderr, "Error: Cannot open file %s\n", filename);
        exit(1);
    }

    fscanf(file, "%d %d", rows, cols);
    for (int i = 0; i < *rows; i++) {
        for (int j = 0; j < *cols; j++) {
            fscanf(file, "%d", &matrix[i][j]);
        }
    }

    fclose(file);
}

bool isDiagonalMatrix(int matrix[100][100], int rows, int cols) {
    if (rows != cols) return false; // not square
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i != j && matrix[i][j] != 0)
                return false;
        }
    }
    return true;
}

void displayMatrix(int matrix[100][100], int rows, int cols) {
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
