//Leia um número inteiro e imprima o seu antecessor e o seu sucessor..

#include<stdio.h>

int main() {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    printf("O seu antecessor e %i\n e o seu sucessor e %i\n", (num - 1), (num + 1));

    return 0;

}