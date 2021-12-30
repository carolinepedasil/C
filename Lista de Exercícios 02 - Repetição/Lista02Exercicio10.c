#include <stdio.h>

/*
    Escreva um programa em C para computar a raiz quadrada de um número positivo. 
    Use a idéia abaixo, baseada no método de aproximações sucessivas de Newton. 
    O programa deverá imprimir o valor da vigésima aproximação.

    Seja Y um número, sua raiz quadrada é raiz da equação
    f(x) = x^2 - Y.

    A primeira aproximação é x1 = Y/2. A (n + 1)-ésima aproximação é:
    xn+1 = xn - (f(xn))/(f'(xn))
*/

int main() {
    
    float y, x1, xn, fxn, fxn_1, fxn_2;
    int n, i;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Digite outro número: ");
    scanf("%f", &y);

    x1 = y/2;
    xn = x1;

    for (i = 1; i <= n; i++) {
        fxn = xn*xn - y;
        fxn_1 = 2*xn;
        fxn_2 = 2;
        xn = xn - (fxn/fxn_1);
    }

    printf("%.2f\n", xn);

    return 0;

}