#include <stdio.h>

int main() {
    // Variable declaration
    int my_age = 43;
    // Pointer declaration     
    int* ptr = &my_age;  

    // Reference: Output the memory address of my_age with the pointer
    printf("%p\n", ptr);

    // Dereference: Output the value of my_age with the pointer (43)
    printf("%d\n", *ptr);
}