/*  
    EXERCÍCIO 5:

    Uma loja de material de construção vende os produtos da tabela a seguir, identificados pelo seu código e com o preço correspondente:

    Código |     Produto      | Preço Unitário
       1   | Torneira simples |     125,00
       2   |   Pia banheiro   |      90,00
       3   |  Banco plástico  |       9,00
       4   |   Fita adesiva   |       1,80
       5   |  Chave inglesa   |      55,00

    Faça um programa que processe um pedido de venda por vez. 
    Um pedido pode conter vários produtos diferentes, identificado por seu código, e especificada a quantidade de unidades desejada. 
    O pedido termina quando o código —1 é inserido como código de um produto (condição de parada). 
    Ao final do pedido, informe:

    • Quantidade total de produtos no pedido;
    • O valor total do pedido em reais;
    • O produto mais caro (maior preço unitário) do pedido.
*/

#include <stdio.h>

int main() {

    int codigo = 1, quantidade, preco, quantidadeTotal = 0;
    float total = 0;

    while (codigo != -1){

        printf(" \n Digite o número do código do seu produto: \n ");
        scanf("%i", &codigo);

        switch (codigo){
        
        case 1:
            printf(" \n Torneira Simples \n ");
            printf(" \n Digite a quantidade de unidades desejada: \n ");
            scanf("%i", &quantidade);
            quantidadeTotal = quantidadeTotal + quantidade;
            total = total + (125 * quantidade);
            break;

        case 2:
            printf(" \n Pia banheiro \n ");
            printf(" \n Digite a quantidade de unidades desejada: \n ");
            scanf("%i", &quantidade);
            quantidadeTotal = quantidadeTotal + quantidade;
            total = total + (90 * quantidade);
            break;

        case 3:
            printf(" \n Banco plástico \n ");
            printf(" \n Digite a quantidade de unidades desejada: \n ");
            scanf("%i", &quantidade);
            quantidadeTotal = quantidadeTotal + quantidade;
            total = total + (9 * quantidade);
            break;

        case 4:
            printf(" \n Fita adesiva \n ");
            printf(" \n Digite a quantidade de unidades desejada: \n ");
            scanf("%i", &quantidade);
            quantidadeTotal = quantidadeTotal + quantidade;
            total = total + (1.80 * quantidade);
            break;

        case 5:
            printf(" \n Chave inglesa \n ");
            printf(" \n Digite a quantidade de unidades desejada: \n ");
            scanf("%i", &quantidade);
            quantidadeTotal = quantidadeTotal + quantidade;
            total = total + (55 * quantidade);
            break;

        default:
            printf(" \n Quantidade de Produtos no Pedido: %d \n", quantidadeTotal);
            printf(" \n O valor Total do seu pedido é: R$%.2f \n", total);
            codigo = -1; //O pedido termina quando o código —1 é inserido como código de um produto (condição de parada).
            break;
        }
    }
}