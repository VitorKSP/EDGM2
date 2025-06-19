
#include <stdio.h>

int main () {
    int numero1 = 0;
    int numero2 = 0;

    printf("Escreva o numero1: ");
    scanf("%i", &numero1);
    getchar();

    printf("Escreva o numero2: ");
    scanf("%i", &numero2);
    getchar();

    int Q = numero1 / numero2; 
    int Resto = - (numero2 * Q) + numero1;

    printf("%i = %i * %i + %i\n", numero1, numero2, Q, Resto);

    while(Resto != 0 ) {
    numero1 = numero2;
    numero2 = Resto;
     Q = numero1 / numero2; 
      Resto = - (numero2 * Q) + numero1;
      printf("%i = %i * %i + %i\n", numero1, numero2, Q, Resto);

      }
      
      printf("O MDC entre esses dois numeros e: %i\n", numero2);

      int mmc = (numero1 * numero2) / Resto;

      Printf("O MMC entre esses dois numeors e: %i", mmc);

    return 0;
}