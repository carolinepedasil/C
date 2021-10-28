/*
    Faça um programa que leia um ano (valor inteiro) e imprima se ele é bissexto ou não. 
    OBS: São bissexto todos os anos múltiplos de 400. 
    Não sendo múltiplo de 400, são bissextos todos os anos múltiplos de 4 mas que não são múltiplos de 100.
*/

#include <stdio.h>

int main() {

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0) {
        printf("O ano %d é bissexto.\n", ano);
    } else if (ano % 4 == 0 && ano % 100 != 0) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

}
