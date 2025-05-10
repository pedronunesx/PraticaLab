//Dada uma letra, escreva na tela se essa letra é ou não uma vogal (pode considerar apenas letras minúsculas).. 

#include<stdio.h>
#include<ctype.h>

int main() {
    
    char let;

    printf("Digite uma letra: ");
    scanf("%c", &let);

    if (tolower(let) == 'a' || tolower(let) == 'e' || tolower(let) == 'i' || tolower(let) == 'o' || tolower(let) == 'u') {

        printf("A letra %c e vogal..\n", let);

    }

    else {

        printf("A letra %c nao e vogal..\n", let);
    }

    return 0;

}