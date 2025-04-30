#include <stdio.h>

int main() {

    int dia = 0;

    printf("insira um numero de um 1 a 7 para decidir seu dia da semana: ");
    scanf("%i", &dia);

    if(dia == 1) {
        printf("DOMINGO");
    }else if(dia == 2){
        printf("SEGUNDA-FEIRA");
    }else if(dia == 3){
        printf("TERCA-FEIRA");
    }else if(dia == 4){
        printf("QUARTA-FEIRA");
    }else if(dia == 5){
        printf("QUINTA-FEIRA");
    }else if(dia == 6){
        printf("SEXTA-FEIRA");
    }else if(dia == 7){
        printf("SABADO");
    }else if(dia < 1 || dia > 7){
        printf("Nao existe esse dia");
    }



    return 0;
}