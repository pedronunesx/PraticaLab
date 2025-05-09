//Escreva um programa que peça ao usuário para digitar um número inteiro e verifique se o número é positivo, negativo ou zero..

#include<stdio.h>

int main() {
    int num;
    
    printf("Digite um valor inteiro: ");
    scanf("%i", &num);

    if (num > 0) {

        printf("%i e positivo", num);
    }

    else if (num < 0) {

        printf("%i e negativo", num);
        
    }

    else{

        printf("%i e zero", num);
    }
    
    return 0;

}