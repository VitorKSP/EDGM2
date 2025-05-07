#include <stdio.h>

int main() {
    int i = 0;

    for(int i=0; i<10; i++) {
        printf("%i\n ", i);
    }

    for(int i=9; i>=0; i--) {
        printf("%i\n", i);
    }

    for(;;) {
        printf("Ao infinito e alem!\n");

    }
    
    

    return 0;
}