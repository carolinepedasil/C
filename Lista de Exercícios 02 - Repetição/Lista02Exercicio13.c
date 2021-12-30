#include <stdio.h>

/*
    Na transformação decimal para binário, modifique o programa para que este obtenha o valor binário em uma variável inteira, ao invés de imprimir os dígitos um por linha na tela. 
    Dica: Suponha n = 7 (111 em binário), e você já computou x = 11, para "inserir"o último dígito 1 em x você deve fazer x = x + 100. 
    Ou seja, você precisa de uma variável acumuladora que armazena as potências de 10: 1, 10, 100, 1000 etc.
*/

int main() {
    
    int n, x, i, j, k, l;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n - i; j++) {
            for (k = 0; k <= n - i - j; k++) {
                l = n - i - j - k;
                x = i * 1 + j * 10 + k * 100 + l * 1000;
                printf("%d %d %d %d\n", i, j, k, l);
            }
        }
    }

    return 0;

}