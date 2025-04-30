#include <stdio.h>

int main(){

    float temperatura = 0;

    printf("Escreva a temperatura atual de sua cidade: ");
    scanf("%f", &temperatura);

    if(temperatura >= 40.0f){
        printf("Muito Quente");
    }else if(temperatura >= 30.0f && temperatura < 40.0f){
        printf("Quente");
    }else if(temperatura >= 20.0f && temperatura < 30.0f){
        printf("Agradavel");
    }else if(temperatura < 20.0f){
        printf("Frio");
    }


    return 0;
}