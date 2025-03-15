#include <stdio.h>
#include <stdlib.h>  // Required for malloc()

int main() {
    int rows, cols;
    
    // Take user input for rows and columns
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter cols: ");
    scanf("%d", &cols);

    // Allocate memory for row pointers
    int **ptr = (int **)malloc(rows * sizeof(int *));
    
    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        ptr[i] = (int *)malloc(cols * sizeof(int));
    }

    // Input elements into the array
    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &ptr[i][j]);
        }
    }

    // Print the 2D array
    printf("2D Array Output:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", ptr[i][j]);  // Using ptr[i][j] notation
        }
        printf("\n");
    }

    // Free dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        free(ptr[i]);  // Free each row
    }
    free(ptr);  // Free the array of row pointers

    return 0;
}
