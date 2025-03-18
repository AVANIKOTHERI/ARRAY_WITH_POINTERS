#include <stdio.h>
#include <stdlib.h>

// Function_to_allocate_memory_for_a_matrix
int** allocate_Matrix(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Function_to_fill_a_matrix_with_values
void fill_Matrix(int **matrix, int rows, int cols) {
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(*(matrix + i) + j) = value++;  // Equivalent_to matrix[i][j] = value++;
        }
    }
}

// Function_to_print_a_matrix
void print_Matrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(*(matrix + i) + j));  // Equivalent_to matrix[i][j]
        }
        printf("\n");
    }
}

// Function_to_compute_the_transpose_of_a_matrix
int** transpose_Matrix(int **matrix, int rows, int cols) {
    int **transpose = allocate_Matrix(cols, rows);  // Swap_rows_and_columns_for_transpose

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(*(transpose + j) + i) = *(*(matrix + i) + j);  // Swap_elements
        }
    }

    return transpose;
}

// Function_to_free_allocated_memory
void free_Matrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Driver_Code
int main() {
    int rows = 3, cols = 4;

    // Step_1: Allocate_and_fill_the_matrix
    int **matrix = allocate_Matrix(rows, cols);
    fill_Matrix(matrix, rows, cols);

    printf("Original_Matrix:\n");
    print_Matrix(ma
