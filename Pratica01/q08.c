//escreva um programa que recebe os valores de alturl e largura para calcular a área de um retângulo..

#include<stdio.h>

int main() {

    float alt, larg, ar;

    printf("Digite a altura: ");
    scanf("%f", &alt);
    printf("Digite a largura: ");
    scanf("%f", &larg);

    ar = alt * larg;

    printf("A area do retangulo e %.2f\n", ar);
    
    return 0;

}