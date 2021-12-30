/*  
    EXERCÍCIO 3:

    Uma matriz quadrada de inteiros é um quadrado mágico 
    se a soma dos elementos de cada linha, 
    a soma dos elementos de cada coluna, 
    a soma dos elementos da diagonal principal e da diagonal secundária são todos iguais. 
    
    A matriz abaixo é um exemplo de quadrado mágico: 
    3   4   8 
    10  5   0 
    2   6   7 

    Escreva um algoritmo que recebe do usuário uma matriz quadrada de tamanho máximo 10x10, 
    suas dimensões n e determina se ela é um quadrado mágico escrevendo "Quadrado mágico" ou "Quadrado apenas" caso contrário.
*/

#include <stdio.h>

int main() {

    int dimensao, diagonal, contadorLinha, contadorColuna;

    printf("Digite a dimensão da matriz (até 10):");
    scanf("%d", &dimensao);

    if (dimensao > 0 && dimensao <= 10){

        int matriz[dimensao][dimensao];

        for (contadorLinha = 0; contadorLinha < dimensao; contadorLinha++){
            for (contadorColuna = 0; contadorColuna < dimensao; contadorColuna++){
                printf("Digite o valor para %d x %d: ", contadorLinha, contadorColuna);
                scanf("%d", &matriz[contadorLinha][contadorColuna]);
            }
        }

        int somaLinhaLinha, somaColunaColuna, somaDiagonal, temporarioSomaLinha, temporarioSomaColuna;

        temporarioSomaLinha = -1;
        temporarioSomaColuna = -1;
        somaDiagonal = 0;

        for (contadorLinha = 0; contadorLinha < dimensao; contadorLinha++){

            somaLinhaLinha = 0;
            somaColunaColuna = 0;

            for (contadorColuna = 0; contadorColuna < dimensao; contadorColuna++){
                somaLinhaLinha = somaLinhaLinha + matriz[contadorLinha][contadorColuna];
                somaColunaColuna = somaColunaColuna + matriz[contadorColuna][contadorLinha];

                if (contadorLinha == contadorColuna){
                    somaDiagonal = somaDiagonal + matriz[contadorLinha][contadorColuna];
                }
            }

            if (temporarioSomaLinha < 0){
                temporarioSomaLinha = somaLinhaLinha;
                temporarioSomaColuna = somaColunaColuna;
            } else {
                if (somaLinhaLinha != temporarioSomaLinha || somaColunaColuna != temporarioSomaColuna){
                    printf("Quadrado apenas\n");
                    return 0;
                } else {
                    temporarioSomaLinha = somaLinhaLinha;
                    temporarioSomaColuna = somaColunaColuna;
                }
            }
        }

        if (somaDiagonal != somaColunaColuna || somaDiagonal != somaLinhaLinha){
            printf("Quadrado apenas\n");
        }

        printf("O quadrado é mágico.");
    } else {
        printf("Valor incorreto. O número máximo é até 10.");
    }

    return 0;
    
}