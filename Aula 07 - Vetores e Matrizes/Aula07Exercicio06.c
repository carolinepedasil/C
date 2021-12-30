#include <stdio.h>

/*
    Escreva um programa que lê todos os elementos de uma matriz 4 × 4 e mostra a matriz e a sua transposta na tela.

    Matriz:   Transposta:
    0 1 0 2   0 0 0 0
    0 1 0 2   1 1 1 1
    0 1 0 2   0 0 0 0
    0 1 0 2   2 2 2 2

*/

int main() {

    int matriz[4][4], i, j, cont = 0;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposta:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;

}
