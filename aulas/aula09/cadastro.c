#include <stdio.h>
#include <string.h>

int main(){

    struct endereco_t{
     char logradora [61];
    int numero;
    int cep;
    char complemento[61];
    char cidade [41];
    char uf[3];
    };

     struct cliente_t
     {
    char nome[61];
    long long int telefone;
    char email[61];
    struct endereco_t endereco;
     };

     struct cliente_t cliente;
     strcpy(cliente.nome,"JOSE");
     cliente.telefone = 611111111L;
     strcpy(cliente.email,"Jose.iesb.br");
     strcpy(cliente.endereco.logradora,"sas");
     cliente.endereco.numero = 612;
     cliente.endereco.cep = 7000000;
     strcpy(cliente.endereco.complemento,"iesb");
     strcpy(cliente.endereco.cidade,"Brasilia");
     strcpy(cliente.endereco.uf,"DF");

     printf("Dados do cliente\n");
     printf("Nome: %s\n", cliente.nome);
     printf("Telefone: %lli\n", cliente.telefone);
     printf("E-mail:%s\n", cliente.email);
     printf("Endereco: %s, %i - %s - %s/%s\n", cliente.endereco.logradora, cliente.endereco.numero, cliente.endereco.complemento, cliente.endereco.cidade, cliente.endereco.uf);
     printf("Cep: %i", cliente.endereco.cep);



     struct cliente_t clientes [10];

    for(int i=0; i<10; i++){
        printf("Cliente %i\n", i+1);
        printf("Ente com o nome do cliente: ");
        scanf("%s", clientes[i].nome);

        printf("Entre com o telefone: ");
        scanf("%lli", &clientes[i].telefone);

         

        printf("Entre com o email do cliente: ");
        scanf("%s", clientes[i].email);
        
        

        printf("Entre com o endereco do cliente: ");

         

        printf("Logradora: ");
        scanf("%s", clientes[i].endereco.logradora);

         

        printf("Numero: ");
        scanf("%i", &clientes[i].endereco.numero);

         

       printf("complemento: ");
        scanf("%s", clientes[i].endereco.complemento);

         

            printf("Cidade: ");
        scanf("%s", clientes[i].endereco.cidade);

        

        printf("UF: ");
        scanf("%s", clientes[i].endereco.uf);

        

        printf("CEP: ");
        scanf("%i", &clientes[i].endereco.cep);

      
    }

    return 0;
}