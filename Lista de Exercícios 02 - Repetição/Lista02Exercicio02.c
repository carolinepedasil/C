#include <stdio.h>

/*
    Faça um programa que lê dois números inteiros positivos a e b. 
    Utilizando laços, o seu programa deve calcular e imprimir o valor a^b.
*/

int main() {

    int a, b, i, resultado;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    resultado = 1;

    for (i = 0; i < b; i++) {
        resultado = resultado * a;
    }

    printf("O resultado de a^b é: %d\n", resultado);

    return 0;
    
}
  
