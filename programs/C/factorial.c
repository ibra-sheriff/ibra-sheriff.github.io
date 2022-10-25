#include <stdio.h>

int factorial(int n);
int iterative_factorial(int n);

int main() {
    printf("0! = %d\n", factorial(0));
    printf("1! = %d\n", factorial(1));
    printf("2! = %d\n", factorial(2));
    printf("3! = %d\n", factorial(3));
    printf("4! = %d\n", factorial(4));
    printf("5! = %d\n", factorial(5));
    printf("\n");
    printf("0! = %d using a loop\n", iterative_factorial(0));
    printf("1! = %d using a loop\n", iterative_factorial(1));
    printf("2! = %d using a loop\n", iterative_factorial(2));
    printf("3! = %d using a loop\n", iterative_factorial(3));
    printf("4! = %d using a loop\n", iterative_factorial(4));
    printf("5! = %d using a loop\n", iterative_factorial(5));

    return 0;
}

int factorial(int n) {
    // base case
    if (n <= 1) 
        return 1;
    else    
        return n * factorial(n-1);    
}

int iterative_factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = result * i;
    }

    return result;
}