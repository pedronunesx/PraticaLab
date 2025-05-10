//Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for invalida..

#include<stdio.h>

int main() {

    int op;
    float v1, v2;

    printf("==== OPCAO ====\n");
    printf("1 - Soma 2 numeros;\n 2 - Diferenca entre 2 numeros;\n 3 - Produto entre 2 numeros;\n 4 - Divisao entre 2 numeros;\n");
    printf("Digite a sua opacao: ");
    scanf("%i", &op);

    if (op == 1) {

        printf("Digite o numero 1: ");
        scanf("%f", &v1);
        printf("Digite o numero 2: ");
        scanf("%f", &v2);

        printf("A soma entre %.1f e %.1f e %.1f\n", v1, v2, (v1 + v2));

    }

    else if (op == 2) {

        printf("Digite o numero 1: ");
        scanf("%f", &v1);
        printf("Digite o numero 2: ");
        scanf("%f", &v2);

        if (v1 >= v2) {

            printf("A diferenca entre %.1f e %.1f e %.1f\n", v1, v2, (v1 - v2));

        }

        else {

            printf("A diferenca entre %.1f e %.1f e %.1f\n", v2, v1, (v2 - v1));
        }

    }
    
    else if (op == 3) {

        printf("Digite o numero 1: ");
        scanf("%f", &v1);
        printf("Digite o numero 2: ");
        scanf("%f", &v2);

        printf("O produto entre %.1f e %.1f e %.1f", v1, v2, (v1 * v2));

    }

    else if (op == 4) {
    
        printf("Digite o numero 1: ");
        scanf("%f", &v1);
        printf("Digite o numero 2: ");
        scanf("%f", &v2);

        if (v1 >= v2 && v2 != 0) {
            printf("A divisao entre %.1f e %.1f e %.1f", v1, v2, (v1 / v2));
        }

        else if (v2 > v1 && v1 != 0) {

            printf("A divisao entre %.1f e %.1f e %.1f", v2, v1, (v2 / v1));

        }
    }

    else {

        printf("Opcao Invalida.. Por Favor digitar uma opcao valida!");
    }
    
    return 0;

}