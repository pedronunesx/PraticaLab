//Escreva um programa que peça ao usuário para digitar um número inteiro e imprima se o número é par ou ímpar..

#include <stdio.h>

int main() {

    int n;

    printf("Digite um valor: ");
    scanf("%i", &n);

    if ((n % 2) == 0) {

        printf("%i e par", n);

    }
    else {

        printf("%i e impar", n);

    }

    return 0; 
    
}