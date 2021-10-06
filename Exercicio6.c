/*
    Quando acoes sao vendidas ou compradas por meio de um corretor, a comissao do corretor e muitas vezes calculada usando uma escala que depende do valor das acoes negociadas. 
    Escreva um programa que calcule o valor da comissao a partir do valor da transacao informado pelo usuario, sabendo-se que o corretor cobra os valores indicados abaixo e que a comissao mınima e de R$ 39,00:

    Ate R$ 2.500,00, comissao de R$30 + 1,7%
    R$2.500,01 ate R$6.250,00, comissao de R$56 + 0,66% 
    R$6.250,01 ate R$20.000,00, comissao de R$76 + 0,34% 
    R$20.000,01 ate R$50.000,00, comissao de R$100 + 0,22% 
    R$50.000,01 ate R$500.000,00, comissao de R$155 + 0,11% 
    Mais que R$ 500.000,00, comissao de R$255 + 0,09%
 */

#include <stdio.h>

int main() {
    float valor, comissao;

    printf("Digite o valor da transação: ");
    scanf("%f", &valor);

    if(valor <= 2500) {
        comissao = 30 + (valor * 1.7 / 100);
        if(comissao < 39) comissao = 39.0;
    }
    else if(valor <= 6250)
        comissao = 56 + (valor * 0.66 / 100);
    else if(valor <= 20000 )
        comissao = 76 + (valor * 0.34 / 100);
    else if(valor <= 50000)
        comissao = 100 + (valor * 0.22 / 100);
    else if(valor <= 500000)
        comissao = 155 + (valor * 0.11 / 100);
    else
        comissao = 255 + (valor * 0.09 / 100);

    printf("\n Comissão = R$%.2f", comissao);

    return 0;
}
