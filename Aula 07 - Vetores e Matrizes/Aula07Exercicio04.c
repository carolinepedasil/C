#include <stdio.h>

/*
    Faça um programa para realizar operações com matrizes que tenha as seguintes funcionalidades:

    Um menu para escolher a operação a ser realizada:
    1 - Leitura de uma matriz 1.
    2 - Leitura de uma matriz 2.
    3 - Impressão da matriz 1 e matriz 2.
    4 - Cálculo da soma de matriz 1 com matriz 2, e impressão do resultado.
    5 - Cálculo da multiplicação de matriz 1 com matriz 2, e impressão do resultado.
    6 - Cálculo da subtração de matriz 1 com matriz 2, e impressão do resultado.
    7 - Impressão da transposta de matriz 1 e matriz 2.
*/

int main() {

    int matriz1[3][3];
    int matriz2[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um número para a matriz 1: ");
            scanf("%d", &matriz1[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um número para a matriz 2: ");
            scanf("%d", &matriz2[i][j]);
        }
    }

    int opcao;
    printf("\nEscolha uma opção:\n");
    printf("1 - Leitura de uma matriz 1.\n");
    printf("2 - Leitura de uma matriz 2.\n");
    printf("3 - Impressão da matriz 1 e matriz 2.\n");
    printf("4 - Cálculo da soma de matriz 1 com matriz 2, e impressão do resultado.\n");
    printf("5 - Cálculo da multiplicação de matriz 1 com matriz 2, e impressão do resultado.\n");
    printf("6 - Cálculo da subtração de matriz 1 com matriz 2, e impressão do resultado.\n");
    printf("7 - Impressão da transposta de matriz 1 e matriz 2.\n");
    printf("8 - Sair.\n");
    printf("\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("\n");
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    printf("%d ", matriz1[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("\n");
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    printf("%d ", matriz2[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            printf("\n");
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    printf("%d ", matriz1[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    printf("%d ", matriz2[i][j]);
                }
                printf("\n");
            }
            break;
        case 4:
            printf("\n");
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    printf("%d ", matriz1[i][j] + matriz2[i][j]);
                }
                printf("\n");
            }
            break;
        case 5:
            printf("\n");
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    printf("%d ", matriz1[i][j] * matriz2[i][j]);
                }
                printf("\n");
            }
            break;
        case 6:
            printf("\n");
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    printf("%d ", matriz1[i][j] - matriz2[i][j]);
                }
                printf("\n");
            }
            break;
        case 7:
            printf("\n");
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    printf("%d ", matriz1[j][i]);
                }
                printf("\n");
            }
            printf("\n");
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    printf("%d ", matriz2[j][i]);
                }
                printf("\n");
            }
            break;
        case 8:
            printf("\n");
            printf("O programa foi fechado.\n");
            break;
        default:
            printf("\n");
            printf("Opção inválida!\n");
            break;
    }

    return 0;

}