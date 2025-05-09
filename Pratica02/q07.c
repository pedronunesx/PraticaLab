//Escreva um programa que peça ao usuário para digitar dois números inteiros e imprima se o primeiro número é maior que o segundo número..

#include<stdio.h>

int main() {
    int n1, n2;

    printf("Digite N1: ");
    scanf("%i", &n1);
    printf("Digite N2: ");
    scanf("%i", &n2);

    if (n1 > n2) {
        printf("%i maior que %i", n1, n2);
        return 0;        
    }
    
    return 0;
}