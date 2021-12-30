#include <stdio.h>

/*
    Faça um programa que leia um número n e imprima n linhas na tela com o seguinte formato.
    
    Exemplo se n = 6:
    + * * * * *
    * + * * * *
    * * + * * *
    * * * + * *
    * * * * + *
    * * * * * +
*/

int main() {

    int n, linha, coluna;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (linha=1; linha<=n; linha++){
        for (coluna=1; coluna<=n; coluna++){
            if(linha==coluna)
                printf("+ ");
            else
                printf("* ");
        }
        printf("\n");
    }
}