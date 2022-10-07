#ifndef HEADER_FILE
#define HEADER_FILE

int generate_random_number(int upper_limit, int lower_limit);
int* generate_random_array(int arr_size, int upper_limit, int lower_limit);
int array_sum(int values[], int n);
double array_average(int values[], int n);
double array_variance(int values[], int n);
double array_standard_deviation(int values[], int n);
double array_median(int values[], int n);
double array_range(int values[], int n);
int max_in_array(int values[], int n);
int min_in_array(int values[], int n);
void swap(int i, int j, int values[]);
void sort(int values[], int n);
void sort_desc(int values[], int n);
void print_array(int values[], int n);

#endif