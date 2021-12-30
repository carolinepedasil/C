/*  
    EXERCÍCIO 4:

    Escreva um programa que calcula a quantidade de grãos de arroz que se pode colocar num tabuleiro de xadrez, obedecendo à seguinte regra: 
    - começar com um grão de arroz no primeiro quadro e, nos quadros seguintes, colocar o dobro do quadro anterior. 
    Por exemplo, no primeiro quadro coloca-se 1 grão, no segundo colocam-se 2 grãos (neste momento, tem-se 3 grãos no total). 
    O processo deve ser repetido até atingir o sexagésimo quarto quadro do tabuleiro.
*/

#include <stdio.h>

int main() {

    float arroz = 0;
    int numero = 0;

    for (arroz = 1; arroz >= 0 && numero != 64; arroz = arroz + arroz){

        numero++;

        printf("%i° quadrinho do tabuleiro de xadrez tem %.0f grãos de arroz \n", numero, arroz);
        
    }
}