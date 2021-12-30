/*  
    Faça um programa que calcule o produto interno de dois vetores u e v de mesmo tamanho n lidos do teclado. 
    O programa deve ler primeiramente o valor de n e em seguida deve ler duas sequências de mesmo tamanho de números reais e salvar cada sequência em um vetor. 
    Suponha que o número máximo de elementos de uma sequência é 50. 
    O programa deve então calcular o produto interno dos vetores lidos.
*/

#include <stdio.h>

int main() {
    
    int tamanhoMaximoVetor, i, j, produtoInterno;

    printf("Defina o tamanho MÁXIMO do vetor com um número máximo de elementos de uma sequeência de 50: ");
    scanf("%d", &tamanhoMaximoVetor);

    int vetor[tamanhoMaximoVetor];

    if (tamanhoMaximoVetor > 0 && tamanhoMaximoVetor < 50){

        for (i = 0; i < tamanhoMaximoVetor; i++){
            printf("Digite a sequência de números INTEIROS distintos no PRIMEIRO vetor: ");
            scanf("%d", &vetor[i]);
        }
    } else {
        printf("Valor incorreto. O número máximo de elementos da sequência é até 50.");
    }

    int vetor2[tamanhoMaximoVetor];

    if (tamanhoMaximoVetor > 0 && tamanhoMaximoVetor < 50){

        for (i = 0; i < tamanhoMaximoVetor; i++){
            printf("Digita sequência de números INTEIROS distintos no PRIMEIRO vetor: ");
            scanf("%d", &vetor2[i]);
        }
    } else {
        printf("Valor incorreto. O número máximo de elementos da sequência é até 50.");
    }

    produtoInterno = 0;

    for (j = 0; j < tamanhoMaximoVetor; j++){
        produtoInterno = produtoInterno + vetor[j] * vetor2[j];
    }

    printf("O produto interno dos vetores é: %d", produtoInterno);
    
}