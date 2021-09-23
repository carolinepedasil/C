#include <stdio.h>

/*Crie um programa que:
- Le um caracter, pula uma linha e imprime o caracter lido.
- Le um inteiro, pula uma linha e imprime o inteiro lido.
- Le um numero ponto flutuante, pula uma linha e imprime o numero lido.*/

int main(){

   char c;
   float b;
   int a;

   printf("Digote um caracter:");
   scanf("%c", &c);
   
   printf("Digite um ponto flutuante:");
   scanf("%f", &b);
   
   printf("Digite um numero:"); 
   scanf("%d",&a);

   printf("Os dados lidos foram: %c, %f, %d \n",c,b,a);
 }

}
  

