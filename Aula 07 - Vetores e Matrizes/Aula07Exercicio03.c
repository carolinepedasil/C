#include <stdio.h>

/*
    Escreva um programa que lê 10 números inteiros e os salva em um vetor. 
    Em seguida o programa deve ler um outro número inteiro C. 
    O programa deve então encontrar dois números de posições distintas do vetor cuja multiplicação seja C e imprimi-los. 
    Caso não existam tais números, o programa deve informar isto.

    Exemplo: 
    Se vetor = (2, 4, 5, −10, 7) e C = 35 então o programa deve imprimir “5 e 7”. 
    Se C = −1 então o programa deve imprimir “Não existem tais números”.
*/

int main() {

    int vetor[10];
    int i, c;

    for(i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("Agora digite outro número: ");
    scanf("%d", &c);

    for(i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(vetor[i] * vetor[j] == c){
                printf("%d e %d\n", vetor[i], vetor[j]);
            }
        }
    }

    return 0;
    
}