#include <stdio.h>
#include <stdlib.h>  // Required for malloc()

int main() {
    int rows, cols;

    // Take user input for rows and columns
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter cols: ");
    scanf("%d", &cols);

    // Dynamically allocate memory for the 1D array
    int *flatArray = (int *)malloc(rows * cols * sizeof(int));

    // Input elements into the 2D array stored in 1D form
    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", (flatArray + (i * cols) + j)); // Store in 1D array
        }
    }

    // Print the flattened 1D array
    printf("Flattened 1D Array:\n");
    for (int i = 0; i < rows * cols; i++) {
        printf("%d ", *(flatArray + i));  // Using pointer arithmetic
    }

    // Free allocated memory
    free(flatArray);

    return 0;
}
