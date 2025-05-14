#include <stdio.h> 

int main(){

    int maior = 0;
    int menor = 0;
    int numero = 0;

    printf("Digite um numero: ");
    scanf("%i", &numero);
    

    maior = numero;
    menor = numero;

    while(numero != 0) {
        if (numero > maior) {
            maior = numero;
         }
         if (numero < menor) {
            menor = numero;
         }

         printf("Escreva um numero: ");
         scanf("%i", &numero);
         

         printf("A variavel maior e:%i \n", maior);
         printf("A variavel menor e:%i \n", menor);
         
    }
    
    
    
    return 0; 
}