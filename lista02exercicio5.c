/*
    Considere o programa para determinar se uma sequência de n números digitados pelo usuário está ordenada ou não. 
    Faça o programa usando uma variável contadora.
*/

#include <stdio.h>

int main() {
    
    int numero, i, j, contador = 0;
    int vetor[numero];

    printf("Digite a quantidade de números: ");
    scanf("%d", &numero);

    for (i = 0; i < numero; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < numero; i++) {
        for (j = i+1; j < numero; j++) {
            if (vetor[i] > vetor[j]) {
                contador++;
            }
        }
    }

    if (contador == 0) {
        printf("A sequência está ordenada.\n");
    } else {
        printf("A sequência não está ordenada.\n");
    }
    
}
