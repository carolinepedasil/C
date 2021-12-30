#include <stdio.h>

/*
    Um jogador da Mega-Sena é supersticioso, 
    e só faz jogos em que o primeiro número do jogo é par, o segundo é ímpar, o terceiro é par, o quarto é ímpar, o quinto é par e o sexto é ímpar. 
    Faça um programa que imprima todas as possibilidades de jogos que este jogador supersticioso pode jogar.
*/

int main() {

    int n, i, j, k, l, m;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            for (k=1; k<=n; k++){
                for (l=1; l<=n; l++){
                    for (m=1; m<=n; m++){
                        if(i%2==0 && j%2==1 && k%2==0 && l%2==1 && m%2==0){
                            printf("%d %d %d %d %d %d\n", i, j, k, l, m, n);
                        }
                    }
                }
            }
        }
    }
}