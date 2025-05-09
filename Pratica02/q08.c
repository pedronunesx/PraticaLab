//Escreva um programa que peça ao usuário para digitar um número inteiro e imprima se o número é par ou ímpar..

#include<stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    if((num % 2) == 0) {
        printf("O valor %i e par!", num);    
    }
    else{
        printf("O valor %i e impar", num);
    }

    return 0;
    
}