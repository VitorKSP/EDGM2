#include <stdio.h>

int main () {
    printf("%12i  %i\n", 1,  1);
    printf("%10i  %i  %i\n", 1,  2,  1);
    printf("%7i  %i  %i  %i  %i\n", 1,  2,  3,  2,  1);
    printf("%4i  %i  %i  %i  %i  %i  %i\n", 1,  2,  3,  5,  3,  2,  1);
    printf("%i  %i  %i  %i  %i  %i  %i  %i  %i\n", 1,  2,  3,  5,  8,  5,  3, 2, 1);
    return 0;
}