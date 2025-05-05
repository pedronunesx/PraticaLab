//Escreva um programa que calcule a média aritmética de 3 valores inteiros e imprima o resultado..

#include<stdio.h>
#include<math.h>

int main() {
    int n1, n2, n3;
    float mda;

    printf("N1: ");
    scanf("%i", &n1);
    printf("N2: ");
    scanf("%i", &n2);
    printf("N3: ");
    scanf("%i", &n3);
    mda = (n1 + n2 + n3) / 3;
    printf("A media aritmetica entre %i, %i e %i e igual a %.2f", n1, n2, n3, mda);

    return 0;

}