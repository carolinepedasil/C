#include <stdio.h>

/*
    Faça um programa que lê dois números inteiros positivos a e b.
    Utilize laços, o seu programa deve calcular e imprimir o valor a^b.
*/

int main() {
        
    int a, b, i, resultado;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);
    
    printf("Digite o segundo  número inteiro: ");
    scanf("%d",&b);
    
    resultado = 1;
    
    for(i=0; i<b; i++){
        resultado = resultado * a;
    }
    
    printf("O resultado é: %d", resultado);
    
    return 0;

}