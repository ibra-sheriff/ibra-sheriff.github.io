#include <stdio.h>

int a_plus_b(int a, int b);
int a_minus_b(int a, int b);
int a_times_b(int a, int b);
int a_divide_b(int a, int b);
int a_modulus_b(int a, int b);

int main(int argc, char* argv[]) {
    int a = 1;
    int b = 1;

    int c = a_plus_b(a, b);
    int d = a_minus_b(a, b);
    int e = a_times_b(a, b);
    int f = a_divide_b(a, b);
    int g = a_modulus_b(a, b);

    printf("a + b = %d\n", c);
    printf("a - b = %d\n", d);
    printf("a * b = %d\n", e);
    printf("a / b = %d\n", f);
    printf("a %% b = %d\n", g);
}

int a_plus_b(int a, int b) {
    return a + b;
}

int a_minus_b(int a, int b) {
    return a - b;
}

int a_times_b(int a, int b) {
    return a * b;
}

int a_divide_b(int a, int b) {
    return a / b;
}

int a_modulus_b(int a, int b) {
    return a % b;
}