#include <stdio.h>

int main()
{

    int numeros[10];
    

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero e da enter que vai repetir ate da 10 numeros: ");
        scanf("%i", &numeros[i]);
        getchar();
    }
        int numero = 0;

        printf("Digite um valor para um numero: ");
        scanf("%i", &numero);
        getchar();

        int achou = -1;

        for (int i = 0; i < 9; i++)
        {

            if (numeros[i] == numero)
            {
                achou = i;
            }
        }

        if (achou < 0)
        {
            printf("A mensagem nao foi encontrada\n");
        }else {
            printf("O numero foi encontrado na posicão: %i", achou);
        }


    return 0;
}