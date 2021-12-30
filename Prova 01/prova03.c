/*  
    EXERCÍCIO 3:

    Escreva um programa que calcula e informa o valor da série a seguir, sendo n um valor fornecido pelo usuário.
    S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + n/(n + (n-1))
*/

#include <stdio.h>

int main() {

    float n, s;

    printf("\n Digite um numero: \n");
    scanf("%f", &n);

    s = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + (n/(n + (n-1))); //formula que está no enunciado

    printf("\n O valor da série S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + %.0f/(%.0f + (%.0f-1)) é: %f \n", n, n, n, s);

}