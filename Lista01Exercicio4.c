/*
  Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o conteúdo das variáveis. 
  Refaça este problema sem o uso de outras variáveis que não x e y.
*/

#include <stdio.h>

int main(){

    int x;
    int y;

    printf("Escreva um valor inteiro para x: ");
    scanf("%d", &x);
    printf("Escreva um valor inteiro para y: ");
    scanf("%d", &y);

    x= x + y; 
    y= x - y;
    x= x - y;

    printf("Os novos valores de x e y são respectivamente: %d e %d.", x, y);

}
