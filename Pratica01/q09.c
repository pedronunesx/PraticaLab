//Faça um programa em C que leia dois números reais e calcule as quatro operações básicas entres estes dois números, adição, subtração, multiplicação e divisão. Ao final, o programa deve imprimir os resultados dos cálculos..

#include<stdio.h>

int main() {

    float n1, n2;
    printf("Digite N1: ");
    scanf("%f", &n1);
    printf("Digie N2: ");
    scanf("%f", &n2);

    printf("A adicao entre os dois numeros e %.2f\n A subtracao entre esses dois numeros e %.2f ou %.2f\n A multiplicacao entre esses dois numeros e %.2f\n E a divisao entre esses dois numeros e %.2f ou %.2f\n", (n1 + n2), (n1 - n2), (n2 - n1), (n1 * n2), (n1 / n2), (n2 / n1)); //Essas segundas opções ("ou"), significa a operação só que alterando N1 por N2..

    return 0;

}