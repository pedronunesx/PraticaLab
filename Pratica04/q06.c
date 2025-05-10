//Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por diante.. 

#include<stdio.h>

int main() {
   
    int dia; 

    printf("Informe o dia: ");
    scanf("%i", &dia);

    switch (dia) {
    case 1:
        printf("Domingo");
        break;
    case 2: 
        printf("Segunda-Feira");
        break;
    case 3:
        printf("Terca-Feira");
        break;
    case 4: 
        printf("Quarta-Feira");
        break;
    case 5:
        printf("Quinta-Feira");
        break;
    case 6:
        printf("Sexta-Feira");
        break;
    case 7:
        printf("Sabadoooouu");
        break;
    default:
        printf("Numero invalido, digitar numero correto!\n");
        break;
    }

    return 0;
    
}