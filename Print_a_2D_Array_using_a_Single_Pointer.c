#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};  // 2D Array
    int *ptr = &arr[0][0];  // Pointer to the first element
    int rows = 2, cols = 3;

    // Traverse the 2D array using a single pointer
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(ptr + (i * cols) + j));  // Accessing arr[i][j]
        }
    }

    return 0;
}
