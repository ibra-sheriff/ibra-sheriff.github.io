#include <stdio.h>

int main() {
    // while loop version
    int k = -5;
    while (k <= 12) {
        printf("%d ", k++);
    }
    printf("\n");

    // do-while loop version
    int l = -5;
    do {
        printf("%d ", l++);
    } while (l <= 12);
    printf("\n");

    // for loop version
    for (int m = -5; m <= 12; m++) {
        printf("%d ", m);
    }
    printf("\n");

    return 0;
}
