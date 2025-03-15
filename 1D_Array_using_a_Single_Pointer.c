#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // 1D Array
    int *ptr = arr;  // Pointer to the first element
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate array size

    // Traverse using pointer
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));  // Access elements using pointer arithmetic
    }

    return 0;
}
