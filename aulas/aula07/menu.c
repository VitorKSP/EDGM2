#include <stdio.h>

int main(){
    int opcao = 0;

while (opcao != 4) {
    system("clear");
printf("+-----------------------------+\n");
printf("|       MENU PRINCIPAL        |\n");
printf("+-----------------------------+\n");
printf("| 1 - Novo Jogo               |\n");
printf("| 2 - Ver Score               |\n");
printf("| 3 - Sobre o Jogo            |\n");
printf("| 4 - Sair                    |\n");
printf("+-----------------------------+\n");
printf("Escolha uma opcao > ");
scanf("%i", &opcao);
while(getchar() != '\n');


switch(opcao) {
    case 1: {
        int nivel = 0;
        printf("Nivel do jogo \n");
        printf("1 - facil\n");
        printf("2- medio\n");
        printf("3 - Dificil\n");
        printf("escolha um nivel > ");
        scanf("%i", &nivel);
        while(getchar() != '\n');
        break;
    }
    case 2:{
    printf("Score do jogo\n");
    printf("1 - Jogador A - 10000 pontos\n");
    printf("2 - Jogador B - 7000 pontos\n");
    printf("3 - Jogador C - 5000 pontos\n");
    printf("4 - Jogador D - 3000 pontos\n");
    printf("5 - Jogador E - 1000 pontos\n");
    printf("Pressione Enter Para continuar ...");
    while(getchar() != '\n');
    break;

    }
    case 3:{
        printf("sobre o jogo\n\n");
        printf("Desenvolvido em C\n");
        printf("Por Dev1 e Dev2\n\n");
        printf("Copyright(C) 2025\n");
        printf("Pressione Enter para continuar ...");
        while(getchar() != '\n');
        break;

    }
    case 4:{
        printf("Ate logo!\n");
        break;
    }
    default: printf("opcao invalida! Tente novamente.\n");
}

}
    return 0;
}