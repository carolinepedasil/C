#include <stdio.h>

/*
    Escreva um programa que lê uma string de até 50 caracteres, 
    e imprime “Palíndromo” caso a string seja um palindromo e “Nao Palíndromo” caso contrário.

    OBS: Um palíndromo é uma palavra ou frase, que é igual quando lida da esquerda para a direita ou da direita para a esquerda 
    (espaços em brancos são descartados). Assuma que as palavras são todas em minúsculas e sem acentos.

    Exemplo de palíndromo: ana.
*/

int main() {
    
    char palavra[50];
    int i, j, tamanho;

    printf("Digite uma PALAVRA: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for(i=0, j=tamanho-1; i<tamanho/2; i++, j--){
        if(palavra[i] != palavra[j]){
            printf("Não é palíndromo.\n");
            return 0;
        }
    }

    printf("É palíndromo.\n");

    return 0;
    
}