#include <stdio.h>

/*
    Dadas duas sequências de n e m valores inteiros, onde n <= m, 
    escreva um programa que verifica quantas vezes a primeira sequência ocorre na segunda.

    Exemplo:
    Primeira Sequência: 1 0 1
    Segunda Sequência:  1 1 0 1 0 1 0 0 1 1 0 1 0 
    Resultado: 3
*/

int main() {
        
    int n, m, i, j, cont = 0;
    int x[50], y[50];

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Digite um número: ");
    scanf("%d", &m);

    if (n <= m) {
        for (i = 1; i <= n; i++) {
            printf("Digite o %dº número da primeira sequência: ", i);
            scanf("%d", &x[i]);
        }

        for (j = 1; j <= m; j++) {
            printf("Digite o %dº número da segunda sequência: ", j);
            scanf("%d", &y[j]);
        }

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= m; j++) {
                if (x[i] == y[j]) {
                    cont++;
                }
            }
        }

        printf("A primeira sequência ocorre %d vezes na segunda sequência", cont);
    } else {
        printf("O número da primeira sequência deve ser menor ou igual ao da segunda");
    }

    return 0;
    
}