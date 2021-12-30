/*  
    EXERCÍCIO 2:

    Um número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual a esse número. 
    Escreva um programa que leia um valor inteiro positivo n e informe se n é um número perfeito ou não. 
    Por exemplo, o número 6 é um número perfeito, pois 6 = 1 + 2 + 3.
*/

#include <stdio.h>

int main() {

    int numero, soma, divisor;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    soma = 0;

    for (divisor = 1; divisor < numero; divisor++){
        if (numero % divisor == 0)
            soma = soma + divisor;
    }

    if (numero == soma)
        printf("O numero %d é perfeito", numero);
    else
        printf("O numero %d nao é perfeito", numero);
        
}