#include <stdio.h>

void print_arr(int values[], int arr_length);
void print_arr_helper(int values[], int arr_length, int i);

int main() {
    int vals[10] = {0, 1, 2, 3, 4, 5, 6, 7 , 8, -9};
    print_arr(vals, 10);
    return 0;
}

void print_arr(int values[], int arr_length) {
    print_arr_helper(values, arr_length, 0);
}

void print_arr_helper(int values[], int arr_length, int i) {
    if (i == arr_length) return;
    printf("%d ", values[i]);
    print_arr_helper(values, arr_length, i + 1);
}