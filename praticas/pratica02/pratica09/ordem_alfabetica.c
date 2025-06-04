#include <stdio.h>
#include <string.h>

int main (){
    char palavra1 [11];
    char palavra2 [11];

    printf("Digite uma palavra: ");
    scanf("%s", palavra1);

    printf("Digite outra palavra: ");
    scanf("%s", palavra2);

    if (strcmp(palavra1, palavra2) >= 0) {
        printf("%s\n", palavra2);
        printf("%s\n", palavra1);
} else {
 printf("%s\n", palavra1);
 printf("%s\n", palavra2);
}



    return 0;
}