#include <stdio.h>

/*
    Faça um programa que lê um número n e imprima os valores para j de 1 até n, um valor por linha.
*/

int main() {
    
    int n, j;

    printf("Insira um valor para o qual deseja calcular seus divisores: ");
    scanf("%d", &n);

    for(j = 1; j <= n; j++)
        printf("%d ", j);

    return 0;

}