#include <stdio.h>

/*
    Faça um programa que leia os valores correspondentes aos três lados a, b e c de um triângulo. 
    O programa então determina se o triângulo é isósceles, escaleno ou equilátero, 
    informando isto para o usuário, e em seguida imprime a área A do triangulo utilizando a fórmula de Heron: 
  
    A = √ s * (s - a) * (s - b) * (s - c) 
    onde: s = (a+b+c) / 2

*/

int main() {

    float a;
    float b;
    float c;
    float area;
    float s;

    printf("Digite 3 números: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (a == b || b == c || c == a) {
        printf("O triangulo é isósceles"); // isósceles = quando 2 lados são iguais
    } else { 
        if (a != b && b != c && c != a)
        printf("O triangulo é escaleno"); // escaleno = as medidas de todos os lados são diferentes
        else (a == b && b == c && c == a);
        printf("O triangulo é equilatero"); // equilatero = quando todos os lados são iguais
        
    }

    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("A área A do triângulo utilizando a fórmula de Heron é: %f", &area);

}