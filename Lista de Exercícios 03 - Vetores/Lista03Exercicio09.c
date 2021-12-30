/*  
    Escreva um programa que leia uma sequência de números inteiros e os salva em um vetor. 
    Assuma que o tamanho máximo da sequência é 50. 
    Em seguida o programa deve ler um outro número inteiro C. 
    O programa deve então encontrar dois números de posições distintas do vetor cuja multiplicação seja C e imprimi-los. 
    Caso não existam tais números, o programa deve informar isto.

    Exemplo: 
    Se vetor = [2, 4, 5, -10, 7] e C = 35 então o programa deve imprimir “5 e 7". 
    Se C = -1 então o programa deve imprimir “Não existem tais números".
*/

#include <stdio.h>

int main() {
    
    int tamanhoMaximoVetor, i, j, k, multiplicador, contadorAuxiliar, possuiValorDuplicado;

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

    printf("Digite um número inteiro C: ");
    scanf("%d", &multiplicador);

    for (j = 0; j < tamanhoMaximoVetor; j++){
        contadorAuxiliar = 0;
        possuiValorDuplicado = 0;

        while (contadorAuxiliar < tamanhoMaximoVetor && !possuiValorDuplicado){
            if (vetor[j] == vetor[contadorAuxiliar]){
                possuiValorDuplicado = 1;
            }
            contadorAuxiliar++;
        }
    }

    return 0;
    
}