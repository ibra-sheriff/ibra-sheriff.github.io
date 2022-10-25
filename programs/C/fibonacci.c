#include <stdio.h>

int fibonacci(int n);

int main() {
    int n = 5;

    printf("Fibonacci series of %d numbers is: ", n);
 
    // for loop to print the fibonacci series.
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
 
int fibonacci(int n) {
    // Base case
    if (n == 0) return 0; 
    if (n == 1 || n == 2) return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}