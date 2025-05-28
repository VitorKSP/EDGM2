#include <stdio.h>

int main(){

    float total = 0.0f;

    float nota_fiscal[5][3];

    for(int i=0; i<5; i++) {

        printf ("digite um valor para nota_fiscal[i][0]: ");
        scanf("%f", &nota_fiscal[i][0]);
        getchar();

        printf("digite um valor para nota_fiscal[i][1]: ");
        scanf("%f", &nota_fiscal[i][1]);
        getchar();

        nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];
         total = total + nota_fiscal[i][2];
    }

    for(int i=0; i<5; i++) {
        for(int j=0; j<3; j++) {
            printf("%.2f ", nota_fiscal[i][j]);
}
printf("\n");

    }


      printf("O valor total e: %.2f ", total);




    return 0;
}