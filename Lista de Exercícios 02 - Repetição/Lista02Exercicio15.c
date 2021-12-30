#include <stdio.h>

/*
    Faça um programa que leia um número n e imprima n linhas na tela com o seguinte formato:
    
    Eexemplo se n = 6:
    1
    12
    123 
    1234 
    12345 
    123456
*/

int main() {
    
    int n, i;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
    
}