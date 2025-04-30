#include <stdio.h>
#include <math.h>

int main() {

    int a = 0;
    int b = 0;
    int c = 0;

     printf("Escreva um valor de a: ");
     scanf("%i", &a);
     getchar();

     printf("Escreva um valor de b: ");
     scanf("%i", &b);
     getchar();

     printf("Escreva um valor de c: ");
     scanf("%i", &c);
     getchar();

     float delta = b*b - 4*a*c;
     float x1 = (-b + sqrt(delta)) / 2*a;
     float x2 =  (-b - sqrt(delta)) / 2*a;

     printf("Valor de x1: %2.2f\n", x1);
     printf("Valor de x2: %2.2f\n", x2);


     

    
    return 0;
}