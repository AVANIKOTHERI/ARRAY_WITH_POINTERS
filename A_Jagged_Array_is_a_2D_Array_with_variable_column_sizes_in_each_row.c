#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 4;

    // Step 1: Create an array of row pointers
    int **arr = (int **)malloc(rows * sizeof(int *));

    // Step 2: Allocate memory for different column sizes
    int colSizes[] = {2, 3, 1, 4};  // Columns per row
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(colSizes[i] * sizeof(int));
    }

    // Step 3: Assign values
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colSizes[i]; j++) {
            arr[i][j] = value++;
        }
    }

    // Step 4: Print jagged array
    printf("Jagged Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colSizes[i]; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Step 5: Free memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
