//Escreva um programa que recebe 2 valores a e b, e troque esses valores, de modo que, no fim da execução, b possua o valor de a e vice-versa..

#include<stdio.h>

int main() {
    int a, b;
    int aux = 0;

    printf("Digite o valor de a: ");
    scanf("%i", &a);
    printf("Digite o valor de b: ");
    scanf("%i", &b);

    aux = a;
    a = b;
    b = aux;

    printf("O valor de a e %i e o valor de b e %i\n", a, b);

    return 0;

}