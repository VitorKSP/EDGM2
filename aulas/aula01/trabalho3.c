#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* Este programa, em C , define uma estrutura Aluno para armazenar o nome, matrícula e notas de um estudante.
Ele permite ao utilizador cadastrar novos alunos, exibir a lista de alunos e sair do programa*/

#define MAX_ALUNOS 10 // Define uma constante para o número máximo de alunos.
#define MAX_NOME 50   //  Define uma constante para o tamanho máximo do nome de um aluno.
#define MAX_NOTAS 3  //   Define uma constante para o número máximo de notas de um aluno. 

int main() {
  struct Aluno { // Define uma estrutura chamada Aluno para armazenar os dados de um estudante.
    char nome[MAX_NOME];//Um array de caracteres para armazenar o nome do aluno.
    unsigned  int matricula; // Um inteiro longo para armazenar a matrícula do aluno.
    float notas[MAX_NOTAS];// Um array de números de ponto flutuante para armazenar as notas do aluno. 
  };
  struct Aluno alunos[MAX_ALUNOS];// Cria um array de estruturas Aluno para armazenar os dados de todos os alunos.
    int totalAlunos = 0;// Inicializa uma variável para contar o número total de alunos.

  int opcao;

  do { // Um loop do-while para exibir o menu principal e processar as opções disponíveis.
    printf("                                                            \n");
    // Exibe o menu principal com as opções : 1 (Cadastrar), 2 (Listar) e 3 (Sair).
    printf("\t\t\t\t\t================== MENU PRINCIPAL=======================\n");
    printf("\t\t\t\t\t||\t1. CADASTRAR ESTUDANTE                        ||\n");
    printf("\t\t\t\t\t||\t2. LISTAR ESTUDANTES                          ||\n");
    printf("\t\t\t\t\t||\t3. SAIR                                       ||\n");
    printf("\t\t\t\t\t========================================================\n");
    printf("\n\t\t\t\t\tESCOLHA UMA OPCAO : ");
    scanf("%d", &opcao);//  Lê a opção do usuario.
    printf("                                                            \n");
    

    if (opcao == 1) {//Se a opção for 1 (Cadastrar), chama a função para cadastrar um novo aluno.
      if (totalAlunos >= MAX_ALUNOS) {// Se for mais de 10 estudantes exibir a mensagem:LIMITE DE ESTUDANTES ATINGIDO! 
        printf("\n\t\t\t\t\t\t\tLIMITE DE ESTUDANTES ATINGIDO!\n");
        continue;//interrompe a iteração atual e inicia a próxima iteração do laço onde se encontra.
      }

      while (getchar() != '\n'); // Limpar buffer
      printf("\t\t\t\t\tDIGITE O NOME DO ESTUDANTE:  ");
      fgets(alunos[totalAlunos].nome, MAX_NOME, stdin);//ler uma linha de texto de um fluxo 
      //  e armazená-la em uma string. 
    //stdin dispositivo de entrada padrão via teclado, nesse caso.
     
int matriculaTemp;

      printf("Digite a matricula (numero positivo): ");
    while (scanf("%d", &matriculaTemp) != 1 || matriculaTemp <= 0) {
        printf("Matricula invalida. Digite novamente: ");
        while (getchar() != '\n');
    }

      alunos[totalAlunos].matricula = (unsigned int)matriculaTemp;
        printf("\n");
      
      for (int i = 0; i < MAX_NOTAS; i++) {
        do {
          printf("\t\t\t\t\tDIGITE A NOTA %d (0.0 a 10.0): ", i + 1);
          if (scanf("%f", &alunos[totalAlunos].notas[i]) != 1 ||
              alunos[totalAlunos].notas[i] < 0 ||
              alunos[totalAlunos].notas[i] > 10) {
            while (getchar() != '\n'); // Limpar buffer
          } else {
            break;
          }
        } while (1);
      }
      totalAlunos++;

      printf("\n\n\n\n\t\t\t\t\t\t\033[0;32mESTUDANTE %d CADASTRADO COM  SUCESSO!\n",totalAlunos);

    } else if (opcao == 2) { // Se a opção for 2 (Listar), chama a função para listar os alunos cadastrados.
      if (totalAlunos == 0) {
        printf("\n\t\t\t\tNENHUM ESTUDANTE CADASTRADO.\n");
      } else {
        printf("\n\t\t\t\t ===================== LISTA DE ESTUDANTES ====================\n\n");
        for (int i = 0 ; i < totalAlunos;i++ ){
        printf("\t\t\t\t                ======== ESTUDANTE %d =======\n", i + 1);
        printf("\t\t\t\tNOME ======>: %s\n", alunos[i].nome);
        printf("\t\t\t\tMATRICULA =>: %li\n",alunos[i].matricula);
        for ( int j = 0; j < 3; j++){
            printf("\t\t\t\tNOTA %d ====>: %.2f\n", j +1, alunos[i].notas[j]);
        }
        printf("\n");
      }
    }
  }else if (opcao == 3){//Se a opção for 3 (Sair), o loop do menu principal é interrompido e o programa termina.
    printf("\n\t\t\t\tENCERRANDO O PROGRAMA! ATE A PROXIMA.\n");
  }else {
    printf("\n\t\t\t\tOPCAO INVALIDA!!! TENTE NOVAMENTE ( ESCOLHA 1 , 2 OU 3).\n");
    while (getchar() != '\n');// Limpar o buffer
  }
} while (opcao != 3);

  return 0;
  setlocale (LC_ALL,"Portuguese");
}