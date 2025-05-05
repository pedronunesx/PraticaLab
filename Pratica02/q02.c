//Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares..

#include<stdio.h>
#include<math.h>

int main() {

    float vlr, cotdol, conv;
    printf("Digite o seu valor em reais aqui: ");
    scanf("%f", &vlr);
    printf("Por fim, informe a cotacao em dolar atualmente para a conversao: ");
    scanf("%f", &cotdol);
    conv = vlr / cotdol;
    printf("Seu valor correspondente em dolares e igual a %.2f\n", conv);

    return 0;
}