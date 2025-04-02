#include <stdio.h>

int main (){
    //++ incrementa de 1
    // -- decremeta de 1

    int numero= 10;
    printf("Pre-incremento = %i\n", ++numero);
    printf("Pre-Decremento = %i\n", --numero);
    printf("Pos-incremento = %i\n", numero++);
    printf("Pos-Decremento = %i\n", numero--);

   return 0;
}