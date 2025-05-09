//Escreva um programa que peça ao usuário para digitar um número inteiro e verifique se o número é positivo, negativo ou zero..

#include<stdio.h>

int main() {

    int numi;

    printf("Digite um valor: ");
    scanf("%i", &numi);

    if (numi > 0) {

        printf("%i e positivo", numi);

    }

    else if (numi < 0) {

        printf("%i e negativo", numi);

    }

    else {

        printf("%i e zero", numi);

    }

    return 0;
    
}