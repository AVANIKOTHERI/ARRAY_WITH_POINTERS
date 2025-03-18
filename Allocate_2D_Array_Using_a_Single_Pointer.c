#include <stdio.h>
#include <stdlib.h>

// Function_to_allocate_a_2D_array_using_a_single_pointer
int* allocate_2D_Array(int rows, int cols) {
    int *ptr = (int*)malloc(rows * cols * sizeof(int)); // Allocate_contiguous_memory
    return ptr;
}

// Function_to_fill_the_2D_array
void fill_2D_Array(int *ptr, int rows, int cols) {
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(ptr + i * cols + j) = value++;  // Assign_values_using_pointer_arithmetic
        }
    }
}

// Function_to_print_the_2D_array
void print_2D_Array(int *ptr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(ptr + i * cols + j));  // Access_elements_using_pointer_arithmetic
        }
        printf("\n");
    }
}

// Function_to_free_allocated_memory
void free_2D_Array(int *ptr) {
    free(ptr);
}

// Driver_Code
int main() {
    int rows = 3, cols = 4;

    // Step_1: Allocate_memory
    int *ptr = allocate_2D_Array(rows, cols);
    if (ptr == NULL) {
        printf("Memory_allocation_failed!\n
