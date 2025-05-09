//Faça um programa em C que calcule o valor de uma prestação em atraso. Para isso, o programa deve ler o valor da prestação vencida, a taxa periódica de juros e o período de atraso. Ao final, o programa deve imprimir o valor da prestação atrasada, o período de atraso, os juros que serão cobrados pelo período de atraso, o valor da prestação acrescido dos juros. Considere juros simples..

#include<stdio.h>

int main() {

    float pv, txp, pa, vpa, jur;

    printf("Digite o valor da prestacao vencida: ");
    scanf("%f", &pv);

    printf("Digite o valor da taxa periodica de juros: ");
    scanf("%f", txp);

    printf("Digite o periodo de atraso: ");
    scanf("%f", pa);

    jur = pv * ((txp / 100.0) * pa);

    vpa = pv + jur;

    printf("%.2f\n, %i\n, %.2f\n, %.2f\n", pv, pa, jur, vpa);

    return 0;

}