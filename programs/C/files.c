#include <stdio.h>
#include <stdlib.h>


void add_text_to_file(FILE *fp, char* text, int num_lines);
void print_text_from_file(FILE *fp);

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage <files> <file-path> <attribute>\n");
        return 0;
    }

    FILE* file_ptr; 
    // open the file for both reading and writing
    file_ptr = fopen(argv[1], argv[2]);

    if (argv[2][0] == 'r') {
        print_text_from_file(file_ptr);
    } else {
        add_text_to_file(file_ptr, "Hello, World!\n", 2);
    }

    return 0;
}

/*
 * Adds the lines in the array of strings to the file represent by the given
 * file resource.
 */
void add_text_to_file(FILE *fp, char* text, int num_lines) {
    fprintf(fp, "%s\n", text);
}


/*
 * Display the text in the file on the screen.
 */
void print_text_from_file(FILE *fp) {
    char ch;
    do {
        ch = fgetc(fp);
        printf("%c", ch);
    // Checking if character is not EOF, otherwise we are at the end stop
    } while (ch != EOF);
    printf("\n");
}