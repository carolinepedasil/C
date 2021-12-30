#include <stdio.h>

/*
    Faça um programa em C que calcule o máximo divisor comum de dois números m, n. 
    Você deve utilizar a seguinte regra do cálculo do mdc com m>=n
    mdc(m, n) = m se n = 0 
    mdc(m, n) = mdc(n, m%n) se n > 0
*/

int main() {
    
    int m, n, aux;

    printf("Digite o primeiro número: ");
    scanf("%d", &m);

    printf("Digite o segundo número: ");
    scanf("%d", &n);

    printf("mdc(%d,%d) = ", m, n);

    while (n > 0)
    {
        aux = m;
        m = n;
        n = aux % n;
    }

    printf("%d", m);

    return 0;

}
