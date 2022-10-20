#include <stdio.h>

int main() {
    // An int variable
    int my_age = 43;
    // A pointer variable, with the name ptr, that stores the address of my_age     
    int* ptr = &my_age;  

    // Output the value of my_age (43)
    printf("%d\n", my_age);

    // Output the memory address of my_age
    printf("%p\n", &my_age);

    // Output the memory address of my_age with the pointer
    printf("%p\n", ptr);
}