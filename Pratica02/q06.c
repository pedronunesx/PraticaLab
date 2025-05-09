//Leia uma temperatura em graus Celsius e apresente-a convetida em graus Kelvin. A fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin..

#include<stdio.h>

int main() {
    float C, K;

    printf("Informe a temperatura em graus Celsius: ");
    scanf("%f", &C);
    K = C + 273.15;
    printf("A temperatura %.1f oC convertida para graus Kelvin e %.1f oK", C, K);

    return 0;
    
}