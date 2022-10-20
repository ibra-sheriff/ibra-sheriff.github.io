#include <stdio.h>
#include <stdlib.h>

int main() {
    int* a = malloc(sizeof(int));
    // set the value of a
    *a = 43;
    
    // memory address of a<br>
     printf("%p\n", a);
    // values of a<br>
    printf("%d\n", *a);

    return 0;
}