#include <stdio.h>

/*
    Escreva um programa que lê 10 números inteiros e os salva em um vetor.
    Em seguida o programa deve encontrar a posição do maior elemento do vetor e imprimir esta posição.
*/

int main() {

    int i, n, maior, posicao;
    int vetor[10];
    
    printf("Digite 10 numeros inteiros: ");
    for(i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }
    
    maior = vetor[0];
    posicao = 0;
    
    for(i=0; i<10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    
    printf("O maior numero e %d e esta na posicao %d\n", maior, posicao);
    
    return 0;
    
}