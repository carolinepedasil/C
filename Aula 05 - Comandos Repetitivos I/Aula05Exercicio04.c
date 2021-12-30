#include <stdio.h>

/*
    Faça um programa que lê um número n e imprima os valores entre 2 e n que são divisores de n.
*/

int main() {
    
    int n, i;

    printf("Insira um valor para o qual deseja calcular seus divisores: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
        if(n % i == 0)
            printf("%d ", i);

    return 0;

}