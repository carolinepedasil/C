#include <stdio.h>

/*
    Escreva um programa leia uma matriz do teclado e então imprime os elementos com menor e maior frequência de ocorrência na matriz.
*/

int main() {
    
    int matriz[10][10], i, j, cont = 0, maior = 0, menor = 0, maior_cont = 0, menor_cont = 0;
    
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
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(matriz[i][j] != 0){
                if(matriz[i][j] > maior){
                    maior = matriz[i][j];
                    maior_cont = 1;
                }
                else if(matriz[i][j] == maior){
                    maior_cont++;
                }
                if(matriz[i][j] < menor){
                    menor = matriz[i][j];
                    menor_cont = 1;
                }
                else if(matriz[i][j] == menor){
                    menor_cont++;
                }
            }
        }
    }
    
    printf("\nA matriz possui %d posições não nulas.\n", cont);
    printf("\nO maior elemento da matriz é %d e ocorre %d vezes.\n", maior, maior_cont);
    printf("\nO menor elemento da matriz é %d e ocorre %d vezes.\n", menor, menor_cont);
    
    return 0;

}