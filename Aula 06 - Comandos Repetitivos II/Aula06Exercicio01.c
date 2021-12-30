#include <stdio.h>

/*
    Faça um programa que leia um número n e imprima n linhas na tela com o seguinte formato.
    
    Exemplo se n = 6:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4 5 6
*/

int main() {
    
    int n, i;
    
    printf("Digite um numero inteiro:");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        int j;
        for(j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}