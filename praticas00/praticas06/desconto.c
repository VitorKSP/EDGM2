#include <stdio.h>

int main() {

    float valor_desconto = 0.0f;
    float valor_bruto = 0.0f;

    printf("escreva o valor_bruto que foi gasto: ");
    scanf("%f", &valor_bruto);
    
    if(valor_bruto <= 100.0f) {
        valor_desconto = valor_bruto * 0.01f;
    }else if (valor_bruto <= 500.0f){
        valor_desconto = valor_bruto * 0.05f;
    }else {
        valor_desconto = valor_bruto * 0.1f;
    }

    printf ("o Valor de desconto e: %2.2f", valor_desconto );



    return 0;
}
