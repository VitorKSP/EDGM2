#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX_ALUNOS 10
#define MAX_NOME 50
#define MAX_NOTAS 3

int main() {
    

    struct Aluno {
        char nome[MAX_NOME];
        unsigned int matricula;
        float notas[MAX_NOTAS];
    };

    struct Aluno alunos[MAX_ALUNOS];
    int totalAlunos = 0;
    int opcao;

    do {
        printf("\n\t\t\t\t\t================== MENU PRINCIPAL =======================\n");
        printf("\t\t\t\t\t||\t1. CADASTRAR ESTUDANTE                        ||\n");
        printf("\t\t\t\t\t||\t2. LISTAR ESTUDANTES                          ||\n");
        printf("\t\t\t\t\t||\t3. SAIR                                       ||\n");
        printf("\t\t\t\t\t=========================================================\n");
        printf("\n\t\t\t\t\tESCOLHA UMA OPÇÃO: ");
        scanf("%d", &opcao);
        printf("\n");

        if (opcao == 1) {
            if (totalAlunos >= MAX_ALUNOS) {
                printf("\n\t\t\t\t\tLIMITE DE ESTUDANTES ATINGIDO!\n");
                continue;
            }

            while (getchar() != '\n'); // limpar buffer do scanf

            printf("\t\t\t\t\tDIGITE O NOME DO ESTUDANTE: ");
            fgets(alunos[totalAlunos].nome, MAX_NOME, stdin);
            strtok(alunos[totalAlunos].nome, "\n"); // remove o \n do final

            int matriculaTemp;
            printf("\t\t\t\t\tDIGITE A MATRÍCULA (NÚMERO POSITIVO): ");
            while (scanf("%d", &matriculaTemp) != 1 || matriculaTemp <= 0) {
                printf("\t\t\t\t\tMATRÍCULA INVÁLIDA. DIGITE NOVAMENTE: ");
                while (getchar() != '\n');
            }
            alunos[totalAlunos].matricula = (unsigned int)matriculaTemp;

            for (int i = 0; i < MAX_NOTAS; i++) {
                do {
                    printf("\t\t\t\t\tDIGITE A NOTA %d (0.0 a 10.0): ", i + 1);
                    if (scanf("%f", &alunos[totalAlunos].notas[i]) != 1 ||
                        alunos[totalAlunos].notas[i] < 0.0 ||
                        alunos[totalAlunos].notas[i] > 10.0) {
                        printf("\t\t\t\t\tNOTA INVÁLIDA. DIGITE NOVAMENTE.\n");
                        while (getchar() != '\n');
                    } else {
                        break;
                    }
                } while (1);
            }

            totalAlunos++;
            printf("\n\t\t\t\t\t\033[0;32mESTUDANTE %d CADASTRADO COM SUCESSO!\033[0m\n", totalAlunos);

        } else if (opcao == 2) {
            if (totalAlunos == 0) {
                printf("\n\t\t\t\tNENHUM ESTUDANTE CADASTRADO.\n");
            } else {
                printf("\n\t\t\t\t===================== LISTA DE ESTUDANTES =====================\n\n");
                for (int i = 0; i < totalAlunos; i++) {
                    printf("\t\t\t\t======== ESTUDANTE %d ========\n", i + 1);
                    printf("\t\t\t\tNOME      => %s\n", alunos[i].nome);
                    printf("\t\t\t\tMATRÍCULA => %u\n", alunos[i].matricula);
                    for (int j = 0; j < MAX_NOTAS; j++) {
                        printf("\t\t\t\tNOTA %d    => %.2f\n", j + 1, alunos[i].notas[j]);
                    }
                    printf("\n");
                }
            }

        } else if (opcao == 3) {
            printf("\n\t\t\t\tENCERRANDO O PROGRAMA! ATÉ A PRÓXIMA.\n");

        } else {
            printf("\n\t\t\t\tOPÇÃO INVÁLIDA! ESCOLHA 1, 2 OU 3.\n");
            while (getchar() != '\n');
        }

    } while (opcao != 3);

    return 0;

setlocale (LC_ALL,"Portuguese");
}