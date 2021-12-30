#include <stdio.h>

/*
    Faça um programa que imprima um menu de 4 pratos na tela e uma quinta opção para sair do programa. 
    O programa deve imprimir o prato solicitado. 
    O programa deve terminar quando for escolhido a quinta opção.
*/

int main() {

    int opcao;

    printf("1 - Prato 1: Carne \n");
    printf("2 - Prato 2: Frango \n");
    printf("3 - Prato 3: Peixe \n");
    printf("4 - Prato 4: Porco \n");
    printf("5 - Sair \n");

    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Prato 1: Carne \n");
            break;
        case 2:
            printf("Prato 2: Frango \n");
            break;
        case 3:
            printf("Prato 3: Peixe \n");
            break;
        case 4:
            printf("Prato 4: Porco \n");
            break;
        case 5:
            printf("Saindo... \n");
            break;
        default:
            printf("Opção inválida! \n");
            break;
    }

    return 0;

}
