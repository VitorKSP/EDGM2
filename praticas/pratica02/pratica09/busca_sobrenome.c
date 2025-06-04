#include <stdio.h>
#include <string.h>

int main()
{
    char nomes[10][101];

    for (int i = 0; i < 10; i++)
    {
        printf("Escreva um nome: ");
        scanf("%[^\n]s", nomes[i]);
        while (getchar() != '\n');
    }

    char sobrenome[11];

    printf("Escreva um sobrenome: ");
    scanf("%s", sobrenome);

    int achou = 0;

    for (int i = 0; i < 10; i++)
    {
        if (strstr(nomes[i], sobrenome))
        {
            printf("%s\n", nomes[i]);
            achou = 1;
        }
    }

    if (achou < 0)
    {
        printf("Nenhum nome tem sobrenome");
    }

    return 0;
}
