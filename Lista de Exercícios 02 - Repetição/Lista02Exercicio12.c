#include <stdio.h>

/*
    Implemente um programa que compute todas as soluções de equações do tipo
    x1 + x2 + x3 + x4 = C

    onde todas as variáveis x1,...,x4 são inteiras não negativas e C > 0 é uma constante inteira. 
    Melhore o seu programa com as seguinte idéias.

    Fixado x1, os valores possíveis para x2 são 0, . . . , C - x1. 
    Fixado x1 e x2, os valores possíveis para x3 são 0,...,C - x1 - x2. 
    Fixados x1, x2, e x3, então x4 é unicamente determinado.
*/

int main() {
    
    int x1, x2, x3, x4, c, i, j, k, l;

    printf("Digite um número: ");
    scanf("%d", &c);

    for (i = 0; i <= c; i++) {
        for (j = 0; j <= c - i; j++) {
            for (k = 0; k <= c - i - j; k++) {
                l = c - i - j - k;
                printf("%d %d %d %d\n", i, j, k, l);
            }
        }
    }

    return 0;

}