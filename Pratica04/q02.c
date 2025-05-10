//Leia o número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido..

#include<stdio.h>
#include<math.h>

int main() {

    float num;

    printf("Digite um valor: ");
    scanf("%f", &num);

    if (num > 0) {

        printf("Raiz quadrada de %.1f e %.1f\n", num, sqrt(num));

    }

    else if (num < 0) {

        printf("O valor digitado e invalido!\n");

    }

    else {

        printf("O valor digitado e 0 ;)\n");

    }

    return 0;

}