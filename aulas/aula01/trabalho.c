#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero1 = 0;
    int numero2 = 0;

    printf("Escreva o numero1: ");
    scanf("%i", &numero1);
    getchar();

    printf("Escreva o numero2: ");
    scanf("%i", &numero2);
    getchar();

    if (numero1 == 0 || numero2 == 0) {
        printf("Não existe MMC entre zero e outro número.\n");
        return 1;
    }

    int a = numero1;
    int b = numero2;

    int Q, Resto;

    while (numero2 != 0) {
        Q = numero1 / numero2;
        Resto = numero1 - numero2 * Q;

        
        if (Resto < 0) {
            Resto += abs(numero2);
            Q -= (numero1 * numero2 < 0);
        }

        
        if (Resto != 0) {
            printf("%i = %i * %i + %i   // diferente de 0\n", numero1, numero2, Q, Resto);
        } else {
            printf("%i = %i * %i + %i   // = 0\n", numero1, numero2, Q, Resto);
        }

        numero1 = numero2;
        numero2 = Resto;
    }

    int mdc = numero1;
    int mmc = abs(a * b) / mdc;

    printf("O MMC entre esses dois numeros e: %i\n", mmc);
    printf("O MDC entre esses dois numeros e: %i\n", mdc);

    return 0;
}