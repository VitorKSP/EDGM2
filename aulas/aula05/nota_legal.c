#include <stdio.h>

int main() {
    char nome_produto[31];
    int quantidade;
    float preco;
    float Valor_total;

    printf("Entre com o nome do produto:");
    scanf("%[^\n]s", nome_produto);
    getchar();

    printf("Entre com a quantidade do produto:");
    scanf("%i", &quantidade);
    getchar ();

    printf ("Entre com o preco do produto:");
    scanf("%f", &preco);
    getchar();

    Valor_total = preco * quantidade;

    printf("NOTA LEGAL\n");
    printf("item            Qtd  preco  Valor\n");
    printf("%-15s %03i %5.2f %7.2f\n", nome_produto, quantidade , preco, Valor_total);
    printf("Total: %14.2f", Valor_total);


    return 0;
}