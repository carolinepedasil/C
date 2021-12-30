#include <stdio.h>

/*
    Faça um programa que imprima um menu de 4 pratos na tela e uma quinta opção para sair do programa.
    O programa deve imprimir o prato solicitado.
    O programa deve termina quando for escolhido a quinta opção.
*/

int main() {

    char opcao, A, B, C, D, S;

    printf("MENU: ");
    printf("\nA - Frango");
    printf("\nB - Peixe");
    printf("\nC - Carne");
    printf("\nD - Porco");
    printf("\nS - Sair");

    printf("\n\nEscolha uma opcao: ");
    scanf(" %c", &opcao);

    switch (opcao){
        case 'A':
            printf("\nFrango");
            break;
        case 'B':
            printf("\nPeixe");
            break;
        case 'C':
            printf("\nCarne");
            break;
        case 'D':
            printf("\nPorco");
            break;
        case 'S':
            printf("\nSair");
            break;
        default:
            printf("\nOpcao invalida");
            break;
    }

    return 0;
}