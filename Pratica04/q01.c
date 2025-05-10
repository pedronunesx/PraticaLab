//Escreva um programa em C que leia 2 números inteiros e imprima o maior..

#include<stdio.h>

int main() {
    
    int n1, n2;

    printf("Digite N1: ");
    scanf("%i", &n1);
    printf("Digite N2: ");
    scanf("%i", &n2);

    if (n1 > n2) {

        printf("%i e o maior numero\n", n1);

    }

    else if (n2 > n1) {

        printf("%i e o maior numero\n", n2);

    }

    else {

        printf("Os dois valores sao iguais");

    }

    return 0;
    
}