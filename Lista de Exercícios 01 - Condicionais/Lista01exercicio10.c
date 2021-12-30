#include <stdio.h>

/*
    Escreva um programa que determina a data cronologicamente maior de duas datas fornecidas pelo usuário. 
    Cada data deve ser fornecida por três valores inteiros onde o primeiro representa um dia, o segundo um mês e o terceiro um ano.
*/

int main() {

    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Digite o dia da primeira data: ");
    scanf("%d", &dia1);

    printf("Digite o mês da primeira data: ");
    scanf("%d", &mes1);

    printf("Digite o ano da primeira data: ");
    scanf("%d", &ano1);

    printf("Digite o dia da segunda data: ");
    scanf("%d", &dia2);

    printf("Digite o mês da segunda data: ");
    scanf("%d", &mes2);

    printf("Digite o ano da segunda data: ");
    scanf("%d", &ano2);

    if (ano1 > ano2) {
        printf("A primeira data é maior que a segunda! \n");
    } else if (ano1 < ano2) {
        printf("A segunda data é maior que a primeira! \n");
    } else {
        if (mes1 > mes2) {
            printf("A primeira data é maior que a segunda! \n");
        } else if (mes1 < mes2) {
            printf("A segunda data é maior que a primeira! \n");
        } else {
            if (dia1 > dia2) {
                printf("A primeira data é maior que a segunda!\n");
            } else if (dia1 < dia2) {
                printf("A segunda data é maior que a primeira! \n");
            } else {
                printf("As datas são iguais\n");
            }
        }
    }
}
