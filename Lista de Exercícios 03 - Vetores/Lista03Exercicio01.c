#include <stdio.h>

/*
    Escreva um programa que leia um vetor de até 50 números reais e calcule a média destes valores.
*/

int main() {
    
    int n, i;
    float media, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%f", &media);
        soma += media;
    }

    media = soma / n;

    printf("A média dos números é: %.2f", media);

    return 0;
    
}