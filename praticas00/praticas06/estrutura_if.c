#include <stdio.h>

int main() {
    //int numero = 0;

   // printf("Digite um número inteiro: ");
    //scanf("%i", &numero);

    //int eh_divisivel_por_2 = numero % 2 == 0;

    //if(eh_divisivel_por_2) {
    //    printf("o numero %i eh par!\n", numero);
    //} else {
    //    printf("o numero %i eh impar!\n", numero); 
    //}

    float media = 0;

    printf("Digite sua media final: ");
    scanf("%f", &media);

    if (media == 0.0f) {
        printf("A mencao eh 'SR'.\n");
      }else if (media < 3.0f) {
        printf("A mencao eh 'II'.\n");
      }else if (media < 5.0f) {
        printf("A mencao eh 'MI'.\n");
      }else if (media < 7.0f) {
        printf("A mencao eh 'MM'.\n");
      }else if (media < 9.0f) {
        printf("A mencao eh 'MS'.\n");
      }else {
        printf("A mencao eh 'SS'.\n");
      }
      
      
    
      
      
      
      
      




    return 0;
}