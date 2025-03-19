#include <stdio.h>

int main() {
    printf("---------------------------------\n");
    printf("           NOTA LEGAL            \n");
    printf("---------------------------------\n");
    printf("item            Qde    Prc   Valor\n");
    printf("%-15s %03i %6.2f %6.2f\n", "Caneta Azul",2, 2.0, 4.0);
    printf("%-15s %03i %6.2f %6.2f\n", "Borracha", 1, 5.0, 5.0);
    printf("%-15s %03i %6.2f %6.2f\n", "Resma de Papel", 1, 12.0, 12.0);
    printf("---------------------------------\n");
    printf("TOTAL.................: R$ %6.2f\n", 21.0);


    return 0;
}