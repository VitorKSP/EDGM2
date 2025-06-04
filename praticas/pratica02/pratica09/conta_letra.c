#include <stdio.h>
#include <string.h>

int main (){

    char frase [31];

    printf("Escreva uma frase: ");
    scanf("%[^\n]s", frase);
    while(getchar()!='\n');

    char letra =0;

    printf("Escreva uma letra: ");
    scanf("%c", &letra);

    int quantidade = 0;


for(int i=0; i<strlen(frase); i++) {
    if (frase[i] == letra) {
  quantidade++;
}

}

if(quantidade > 0){
    printf("%i\n", quantidade);
}else{
    printf("A frase não contem letra\n");
}

    return 0;
}