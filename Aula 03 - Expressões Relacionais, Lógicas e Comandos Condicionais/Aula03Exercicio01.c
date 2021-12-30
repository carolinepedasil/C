#include <stdio.h>

/*
    Escreva um programa que lê um número inteiro do tecladoe imprime ”SIM”, 
    se o número for par e maior do que 10, ou for ímpar e menor do que 50. 
    Caso contrário o programadeve imprimir ”NÃO”.
*/

int main() {
    
    int n;

    scanf("%d", &n);

    // (par E maior do que 10) OU (ímpar E menor do que 50)
    
    if(((n % 2 == 0) && (n > 10)) || ((n % 2 != 0) && (n < 50)))
        printf("SIM!");
    else
        printf("NÃO!");

    return 0;
    
}