#include <stdio.h>

int main(int argc, char* argv[]) {
    int a = 1;
    int b = 1;

    int a_plus_b = a + b;
    int a_minus_b = a - b;
    int a_times_b = a * b;
    int a_divide_b = a / b;
    int a_modulus_b = a % b;

    printf("a + b = %d\n", a_plus_b);
    printf("a - b = %d\n", a_minus_b);
    printf("a * b = %d\n", a_times_b);
    printf("a / b = %d\n", a_divide_b);
    printf("a %% b = %d\n", a_modulus_b);
}