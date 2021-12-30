#include <stdio.h>
#include <math.h> //incluir biblioteca com funções matemáticas

/*
    Faça um programa que leia um número real x e calcule o valor de f(x) = √x + (x/2) + x^x
*/

int main() {

    float x;
    float raizQuadrada, divisao, elevadoPotencia, somaDeTudo;

    printf("Digite um número real: "); 
    scanf("%f", &x);

    raizQuadrada = sqrt(x);
    divisao = (x/2);
    elevadoPotencia = pow(x, x); // O ultimo X é o que será elevado
    somaDeTudo = (raizQuadrada + divisao + elevadoPotencia);

    printf("\n Raiz Quadrada: %.2f", raizQuadrada);
    printf("\n Divisao: %.2f", divisao);
    printf("\n Elevado a Potencia: %.2f", elevadoPotencia);
    printf("\n A soma de tudo deu: %.2f", somaDeTudo);

}
