#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc > 1) {
        printf("You supplied %d arguments.\n", argc - 1);
        for (int i = 1; i < argc; i++) {
            printf("Commandline argument %d = %s\n", i, argv[i]);
        }
    } else{
        printf("No Commandline arguments provided.\n");
    }
    
    return 0;
}