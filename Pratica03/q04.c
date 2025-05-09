//Faça um programa em C que calcule o reajuste de salário de um funcionário. Para isso, o programa deverá ler o salário atual do funcionário e ler o percentual de reajuste. Ao final imprimir o valor do novo salário..

#include<stdio.h>

int main() {

    float sal, per, nsal;

    printf("Digite o seu salario: ");
    scanf("%f", &sal);
    printf("Digite o percentual: "); 
    scanf("%f", &per);

    nsal = sal + (sal * (per/100));

    printf("O novo salario sera RS%.2f", nsal);

    return 0;

}