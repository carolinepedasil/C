#include <stdio.h>

/*
    Crie um programa que lê dois números double e que computa e imprime a soma, a diferenca, a multiplicação e divisão dos dois números.
*/

int main(void) {
    
    double n1, n2;

    printf("Digite o numero 1: ");
    scanf("%lf", &n1);

    printf("Digite o numero 2: ");
    scanf("%lf", &n2);

    printf("Numeros lidos: %.1lf e %.1lf", n1, n2);

    printf("\nSoma = %.1lf", n1+n2);
    printf("\nSubtração = %.1lf", n1-n2);
    printf("\nMultiplicação = %.1lf", n1*n2);
    printf("\nDivisão = %.1lf", n1/n2);

    return 0;
    
}