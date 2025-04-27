#include<stdio.h>
#include<math.h>

int main() {
    int n1, n2, mlt;
    printf("N1: ");
    scanf("%i", &n1);
    printf("N2: ");
    scanf("%i", &n2);
    mlt = n1 * n2;
    printf("O produto entre %i e %i e igual a %i\n", n1, n2, mlt);

    return 0;
}