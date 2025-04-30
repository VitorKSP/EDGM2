#include <stdio.h>

int main(){

    char operacao = 0;

    printf("Escreva uma operacao: ");
    scanf("%c", &operacao);
    getchar();

    float numero1 = 0;
    float numero2 = 0;
    float resultado = 0;

    printf("Escreva numero1: ");
    scanf("%f", &numero1);
    getchar();

    printf("Escreva numero2: ");
    scanf("%f", &numero2);
    getchar();

    if (operacao == '1'){
        resultado = numero1 + numero2;
        printf("%1.2f", resultado);
    }else if(operacao == '2'){
        resultado = numero1 - numero2;
        printf("%1.2f", resultado);
    }else if(operacao == '3'){
        resultado = numero1 / numero2;
        printf("%1.2f", resultado);
    }else if(operacao == '4'){
        resultado = numero1 * numero2;
        printf("%1.2f", resultado);
    }else {
        printf("não existe essa operacao no programa");
    }

    

    

    





    return 0;
}