#include <stdio.h>
#include <stdbool.h>

#define Domingo 1
#define Segunda 2
#define Terca 3
#define Quarta 4
#define Quinta 5
#define Sexta 6
#define Sabado 7

int main(){
    enum dias_da_semana_e {
        dom = 1,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab,
    };
    int dia = 0;
    printf("Entre com um dia da semana (1 a 7): ");
    scanf("%i", &dia);

    switch(dia){
        case seg:
        case ter:
        case qua:
        case qui:
        case sex: printf("Eh dia util\n"); break;
        case dom:
        case sab: printf("Eh dia naum util\n"); break;
        default: printf("Dia invalido\n");
    }




    return 0;
}