#include <stdio.h>

/*
    Faça um programa que lê um número n e que compute e imprima o valor.
    OBS: Não use fórmulas como a da soma de uma P.A.
*/

int main() {

    int fat, n;

    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &n);
    
    for(fat = 1; n > 1; n = n - 1)
    fat = fat * n;
    
    printf("\nFatorial calculado: %d", fat);

    return 0;

}