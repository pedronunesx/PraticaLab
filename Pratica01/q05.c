#include<stdio.h>
#include<math.h>

int main() {
    float n1, n2, n3, mda;
    printf("N1: ");
    scanf("%f", &n1);
    printf("N2: ");
    scanf("%f", &n2);
    printf("N3: ");
    scanf("%f", &n3);
    mda = (n1 + n2 + n3) / 3;
    printf("A media aritmetica entre %.2f, %.2f e %.2f e igual a %.2f", n1, n2, n3, mda);

    return 0;
}