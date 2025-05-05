//escreva um programa em C que declare e inicialize as seguintes varíaveis: idade, altura, letra...
#include<stdio.h>

int main() {
    int id;
    float alt;
    char let;

    printf("Digite a letra: ");
    scanf("%c", &let);
    printf("Digite a idade: ");
    scanf("%i", &id);
    printf("Digite a altura: ");
    scanf("%f", &alt);

    printf("A letra e %c, a idade e %i e por fim a altura e %.2f\n", let, id, alt);

    return 0;
}