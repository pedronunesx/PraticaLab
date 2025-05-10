//Escreva um programa que mostre na tela um menu de pratos (pelo menos 5), cada um associado a um número.. Prato 1- Miojo; Prato 2- Ensopado.. Quando um número é selecionado, o programa deve exibir um breve descrição do prato. Por exemplo, ao digitar 1, o programa mostra: "Macarrão Instantâneo".. 

#include<stdio.h>

int main() {

    int op;

    

    printf("======== CARDAPIO ========\n");

    printf("Prato 1 - Miojo;\n Prato 2 - Ensopado;\n Prato 3 - Pizza;\n Prato 4 - Bife Acebolado;\n Prato 5 - Sanduiche;\n");

    printf("Informe a sua Opcao: ");
    scanf("%i", &op);

    if (op == 1) {

        printf("Miojo: Macarrao Instantaneo..");

    }

    else if (op == 2) {

        printf("Ensopado: Carne, Legumes e Caldo cozidos..");

    }

    else if (op == 3) {

        printf("Pizza: Massa assada, Molho, Queijo e Recheios..");

    }

    else if (op == 4) {

        printf("Bife Acebolado: Carne grelhada, Cebolas douradas..");

    }

    else if (op == 5) {
        
        printf("Sanduiche: Pao, Hamburguer, Queijo, Molhos e Legumes..");

    }

    else {

        printf("Opcao Invalida..");

    }
    
    return 0;

}
        