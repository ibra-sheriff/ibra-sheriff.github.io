#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// COMPILE using: gcc -o linked_list linked_list.c -lm

#define TRUE 1
#define FALSE 0

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

Node *create_node(int val);
void add_item(Node *head, int val);
int item_search(Node *head, int num);
void recursive_add_item(Node *head, int val);
int recursive_item_search(Node *head, int num);
void print_linked_list(Node *head);
void recursive_print(Node *head);
void print_list_to_file(Node *head);
char *get_boolean_string(int bool);
int generate_random_number(int lower_limit, int upper_limit);
/* 
 * other functions that can be added
 * stats for the linked list e.g. min, max, average, [best option] standard deviation, variance etc.
 */
double compute_standard_deviation(Node *head);

int main(int argc, char *argv[])
{
    int node_num, lower_limit, upper_limit;
    if (argc < 2)
    {
        printf("Usage ./linked_list <number of nodes e.g. 50> <lower bound e.g. 0> <upper bound e.g. 10>\n");
        return 0;
    }
    // get the program parameters from the given arguments
    node_num = atoi(argv[1]); // use atoi to convert from a string to an integer
    lower_limit = atoi(argv[2]);
    upper_limit = atoi(argv[3]);
    Node *head = create_node(generate_random_number(lower_limit, upper_limit));
    for (int i = 1; i < node_num; i++)
    {
        // recursive_add_item(head, generate_random_number(lower_limit, upper_limit));
        add_item(head, generate_random_number(lower_limit, upper_limit));
    }

    recursive_print(head);
    printf("%f\n", compute_standard_deviation(head));

    return 0;
}

// Creates a new node that holds the given integer value
Node *create_node(int val)
{
    Node *p = malloc(sizeof(Node));
    p->value = val;
    p->next = NULL;

    return p;
}

/*
 *
 * Add a new node with the value val to the end of the linked list with the given head
 */
void add_item(Node *head, int val)
{
    Node *N;
    for (N = head; N != NULL; N = N->next)
    {
        if (N->next == NULL)
        {
            N->next = create_node(val);
            return;
        }
    }
}

// Returns TRUE if the given number is found in the linked list
int item_search(Node *head, int num)
{
    Node *p;
    for (p = head; p != NULL; p = p->next)
    {
        if (p->value == num)
        {
            return TRUE;
        }
    }

    return FALSE;
}

// Adds a new node with the given val to the end of the linked list
void recursive_add_item(Node *head, int val)
{
    if (head->next == NULL)
    { // BASE CASE
        head->next = create_node(val);
        return;
    }

    recursive_add_item(head->next, val); // LOGIC
}

/*
 * Use recursion to search the given linked list for the given value num
 */
int recursive_item_search(Node *head, int num)
{
    // BASE CASE (i) did we find num in the list return TRUE (ii) are we at the end of the list? return FALSE if so.

    // LOGIC - move on to the next item in the list
}

// Prints the values in the linked list on the screen
void print_linked_list(Node *head)
{
    Node *p;
    for (p = head; p; p = p->next)
    {
        printf("%d -> ", p->value);
        if (p->next == NULL)
        {
            printf("NULL\n");
        }
    }
}

/*
 * Use recursion to print the given linked on the screen
 */
void recursive_print(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        printf("NULL\n");
        return;
    }

    printf("%d -> ", head->value);
    recursive_print(head->next);
}

void print_list_to_file(Node *head)
{
    FILE *fp;
    // open the file for reading(a file is created if one does not exist)
    fp = fopen("linked_list_output.txt", "w+");
    Node *p;
    for (p = head; p; p = p->next)
    {
        fprintf(fp, "%d -> ", p->value);
        if (p->next == NULL)
        {
            fprintf(fp, "NULL\n");
        }
    }
    // release file resources
    fclose(fp);
}

// Converts the given boolean integer representation into the string representation
char *get_boolean_string(int bool)
{
    if (bool)
    {
        return "True";
    }

    return "False";
}

// Generates a random integer in the range [lower_limit, upper_limit]
int generate_random_number(int lower_limit, int upper_limit)
{
    return (rand() % (upper_limit - lower_limit + 1)) + lower_limit;
}

// computes the standard deviation of the values in the given listed list
double compute_standard_deviation(Node *head)
{
    int n = 0;
    double average = 0.0;
    double variance = 0.0;
    Node *N;

    // calculate the average and the number of nodes
    for (N = head; N != NULL; N = N->next)
    {
        average = average + (double)N->value;
        n = n + 1;
    }
    average = average / (double)n;

    for (N = head; N != NULL; N = N->next) {
        variance = variance + pow(N->value - average, 2) / n;
    }

    return sqrt(variance);
}
