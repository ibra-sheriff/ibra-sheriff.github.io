#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    // allocate memory for 10 integers
    int* nums = malloc(sizeof(int) * 10);
    for (i = 0; i < 10; i++) {
        // set a value for each integer
        nums[i] = i;
    }

    // display the values of the pointer
    for (i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}