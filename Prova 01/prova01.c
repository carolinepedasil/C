/*  
    EXERCÍCIO 1:

    Uma loja possui um cadastro com 100 clientes. 
    Neste final de ano, a loja deseja enviar uma correspondência a cada um deles anunciando um bônus especial para a próxima compra. 
    O valor do bônus será diferente para cada cliente.

    - Faça um programa que leia o código do cliente (um valor inteiro) e sua última compra. 
    - Calcule e mostre um bônus de 10% se o valor total das compras for menor que R$ 1.000,00 e de 15% caso contrário. 
    - No final do programa, informe o valor médio das últimas compras de todos os 100 clientes e a quantidade de clientes que receberão o bônus de 15%.
*/

#include <stdio.h>

int main() {

    int cliente, recebe15 = 0;
    double valor, bonus, media = 0;

    for (cliente = 1; cliente <= 100; cliente++){

        printf("\n Digite o valor da última compra para o cliente %.0d: \n", cliente);
        scanf("%lf", &valor);

        if (valor <= 1000){
            bonus = (valor * 0.10);
        }else{
            bonus = (valor * 0.15);
            recebe15++;
        }

        media = media + (valor / 100);

        printf("\n Cliente %.0d - Valor do Bônus: R$%.2lf \n", cliente, bonus);
    }

    printf("\n O valor médio foi: R$%.2lf \n", media);
    printf("\n A quantidade de clientes que receberam o bônus de 15 por cento foram: %d \n", recebe15);
    
}