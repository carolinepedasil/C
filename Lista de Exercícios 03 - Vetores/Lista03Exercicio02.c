#include <stdio.h>

/*
    Escreva um programa que leia um vetor de até 50 números reais e calcule o desvio padrão destes valores. 
    O desvio padrão é dado pela seguinte equação: 
    
    s = √(1/(n-1)) * Σn i=1 (xi - x)ˆ2

    Onde n é a quantidade de números, xi é o i-ésimo valor e x é a média dos valores.
*/

int main() {
        
    int n, i;
    float media, soma = 0, desvio = 0;
    float x[50];

    printf("Digite um número: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%f", &x[i]);
        soma += x[i];
    }

    media = soma / n;

    for (i = 1; i <= n; i++) {
        desvio += (x[i] - media) * (x[i] - media);
    }

    desvio = sqrt(desvio / (n - 1));

    printf("O desvio padrão dos números é: %.2f", desvio);

    return 0;
    
}