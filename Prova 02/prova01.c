/*  
    EXERCÍCIO 1:

    Escreva um programa que leia um vetor de números inteiros com, no máximo 10 elementos, e um valor chave. 
    O programa deve buscar o valor chave no vetor de inteiros, não necessariamente ordenado, de tamanho n. 
    O programa deve imprimir o índice onde se encontra a primeira ocorrência do valor chave ou a mensagem "Valor não encontrado", caso o valor chave não esteja no vetor.
*/

#include <stdio.h>

int main() {

    int chave, elemento = 0, i, cont = 0;

    printf("Digite o vetor de números inteiros com, no máximo 10 elementos: ");
    scanf("%d", &elemento);

    int vetor[elemento];

    if (elemento >= 1 && elemento <= 10){

        printf("Agora digite o valor chave: ");
        scanf("%d", &chave);

        for (i = 0; i < elemento; i++){
            printf("Digite o valor do vetor: ");
            scanf("%d", &vetor[i]);
        }

        for (i = 0; i < elemento; i++){
            if (vetor[i] == chave){
                cont++;
                printf("O valor %d está na posição %d\n", chave, i);
            }
        }

        if (cont == 0){
            printf("Valor não encontrado\n");
        }
    } else {
        printf("Valor informado está incorreto. É no máximo 10 elementos!\n");
    }

    return 0;
    
}
