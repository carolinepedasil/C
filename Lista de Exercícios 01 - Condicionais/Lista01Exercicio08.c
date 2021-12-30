#include <stdio.h>

/*
    Faça um programa que lê um caracter ’F’ ou ’C’, que indica se o próximo número a ser digitado corresponde a temperatura em Fahrenheit ou Celsius. 
    Em seguida o programa deve ler o valor da temperatura e então imprimir o valor correspondente da temperatura na outra unidade de medida.
*/

int main() {
    
    char temperatura;
    int valor;
    int fahrenheit;
    int celcius;

    printf("Digite C para Celcius ou F para Fahrenheit: ");
    scanf("%c", &temperatura);

    printf("Digite o valor da temperatura a ser convertido: ");
    scanf("%d", &valor);

    if (temperatura == 'C' || temperatura == 'c')
    {
        fahrenheit = valor * 1.8 + 32;
        printf("%d Celcius em Fahrenheit: %d\n", valor, fahrenheit);
    }
    else if (temperatura == 'F' || temperatura == 'f')
    {
        celcius = (valor - 32) / 1.8;
        printf("%d Fahrenheit em Celcius: %d\n", valor, celcius);
    }
    else
    {
        printf("Caracter invalido!\n");
    }
    
}
