#include <stdio.h>

int main(){

float notas [10];
float soma = 0 ;
float media = 0;

int qtde_acima_media = 0;

for(int i=0; i<9; i++){
    printf("digite uma nota: ");
    scanf("%f", &notas[i]);
    getchar();

    soma = soma + notas[i];
    printf("Soma :%.2f\n", soma);
}
  
 media = soma / 10;
 printf("Media: %.2f\n", media);

 for(int i=0; i<9; i++){
    if(notas[i] > media) {
        qtde_acima_media++;
    }
 }
   printf("alunos acima da media: %i", qtde_acima_media);

    return 0;
}