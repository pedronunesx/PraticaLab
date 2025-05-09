//Leia o tamanho do lado de um quadrado e imprima como resultado a sua área..

#include<stdio.h>
#include<math.h>

int main() {

    float lad;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lad);

    printf("A area do quadrado, baseada no tamanho fornecido e %.2f", (pow(lad, 2)));

    return 0;

}