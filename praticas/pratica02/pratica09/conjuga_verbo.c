#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
 
char pronomes[6][5] = {"EU", "TU", "ELE", "NOS", "VOS", "ELES"};
char sufixos[6][5] = {"O", "AS", "A", "AMOS", "AIS", "AM"};
char verbo [21];

 printf("Escreva um verbo: ");
 scanf("%s", verbo);

 int tamanho = strlen(verbo); // tamanho da string - \0

 for(int i=0; i<tamanho; i++){
        verbo[i] = toupper(verbo[i]); // converte para maiusculo
    }

 int ultima_posicao = strlen(verbo) - 1;
int penultima_posicao = ultima_posicao - 1;

if (verbo[penultima_posicao] == 'A' && verbo[ultima_posicao] == 'R') {
    char radical[21];
    strcpy(radical, verbo);
    radical[penultima_posicao] = 0;
    for(int i=0; i<6; i++){
        printf("%s %s%s\n", pronomes[i], radical, sufixos[i]);

    }
} else {
    printf("O verbo não termina em AR!");
}



    return 0;
}