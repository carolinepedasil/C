#include <stdio.h>

/*
    Escreva um programa que leia todas as posições de uma matriz 10 × 10.
    O programa deve então exibir o número de posições não nulas na matriz.
*/

int main() {
    
    int matriz[10][10], i, j, cont = 0;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(matriz[i][j] != 0){
                cont++;
            }
        }
    }

    printf("\nA matriz possui %d posições não nulas.\n", cont);

    return 0;
    
}