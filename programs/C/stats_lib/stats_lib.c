#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "stats_lib.h"


int main() {
    // generate an array with 10 values with values between 0 and 10
    int n = 10;
    int* test_values = generate_random_array(n, 0, 10);
    print_array(test_values, n);
    sort(test_values, n);
    printf("Sorted array values: ");
    print_array(test_values, n);
    printf("Maximum of the array values = %d\n", max_in_array(test_values, n));
    printf("Minimum of the array values = %d\n", min_in_array(test_values, n));
    printf("Sum of the array values = %d\n", array_sum(test_values, n));
    printf("Average of the array values = %f\n", array_average(test_values, n));
    printf("Median of the array values = %f\n", array_median(test_values, n));
    printf("Variance of the array values = %f\n", array_variance(test_values, n));
    printf("Standard Deviation of the array values = %f\n", array_standard_deviation(test_values, n));

    return 0;
}



int generate_random_number(int upper_limit, int lower_limit) {
    return (rand() % (upper_limit - lower_limit + 1)) + lower_limit;
}

int* generate_random_array(int arr_size, int upper_limit, int lower_limit) {
    int* values = malloc(sizeof(int) * arr_size);
    for (int i = 0; i < arr_size; i++) {
        values[i] = generate_random_number(upper_limit, lower_limit);
    }

    return values;
}

int array_sum(int values[], int n) {
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum = total_sum + values[i];
    }

    return total_sum;
}

double array_average(int values[], int n) {
    return array_sum(values, n) / (double) n;
}

double array_variance(int values[], int n) {
    int i;
    double total_sum;
    double avg = array_average(values, n);

    total_sum = 0;
    for (i = 0; i < n; i++) {
        total_sum = total_sum + pow(values[i] - avg, 2);
    }

    return total_sum / n;
}

double array_standard_deviation(int values[], int n) {
    return sqrt(array_variance(values, n));
}

double array_median(int values[], int n) {
    // make a copy of the array to avoid changing with the original data
    int i, midpoint;
    int* values_copy = malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
        values_copy[i] = values[i];
    }
    sort(values_copy, n);

    midpoint = n / 2;
    if (n % 2 == 0) {
        return ((double) values[midpoint] + (double) values[midpoint - 1]) / 2.0;
    }

    return (double) values[midpoint];
}

double array_range(int values[], int n) {
    return max_in_array(values, n) - min_in_array(values, n);
}

/* returns the biggest number in the array of size n*/
int max_in_array(int values[], int n) {
    int temp = values[0];
    for (int i = 1; i < n; i++) {
        if (temp < values[i]) {
            temp = values[i];
        }
    }

    return temp;
}

/* returns the smallest number in the array of size n*/
int min_in_array(int values[], int n) {
    int to_compare=values[0];

    for (int i = 1; i < n; i++) {
        if (to_compare > values[i]) {
            to_compare = values[i];
        }
    }

    return to_compare;
}

void swap(int i, int j, int values[]) {
    int temp = values[i];
    values[i] = values[j];
    values[j] = temp;
}

void sort(int values[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (values[i] > values[j]) {
                swap(i, j, values);
            }
        }
    }
}

void sort_desc(int values[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (values[i] < values[j]) {
                swap(i, j, values);
            }
        }
    }
}

void print_array(int values[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d]", values[i]);
        } else {
            printf("%d, ", values[i]);
        }
    }
    printf("\n");
}