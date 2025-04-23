#include <stdio.h>

int main () {
    int nota = 0;

    printf("Notas\n");
    printf("1 - 0<= nota <2\n");
    printf("2 - 2<= nota <4\n");
    printf("3 - 4<= nota <6\n");
    printf("4 - 6<= nota <8\n");
    printf("5 - 8<= nota <=10\n");

    printf("Qual e sua nota:");
    scanf("%i", &nota);

    switch(nota){
        case 1: printf("Voce ganhou '*'.\n"); break;
        case 2: printf("Voce ganhou '**'.\n"); break;
        case 3: printf("Voce ganhou '***'.\n"); break;
        case 4: printf("Voce ganhou ****!\n"); break;
        case 5: printf("Voce ganhou *****!\n"); break;
        default: printf("Nota invalida! Tente novamente.\n");

    }
    


    return 0;
}