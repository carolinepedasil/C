#include <stdio.h>

/*
    Escreva um programa para ler n de números do tipo float e imprimir quantos deles estão nos seguintes intervalos: 
    [0...25],[26...50],[51...75] e [76...100]. 
    
    Por exemplo, para n = 10 e os seguintes dez números 2.0, 61.5, -1.0, 0.0, 88.7, 94.5, 55.0, 3.1415, 25.5, 75.0, 
    seu programa deve imprimir:

    Intervalo [0..25]: 3 
    Intervalo [26..50]: 0 
    Intervalo [51..75]: 3 
    Intervalo [76..100]: 2
*/

int main() {

    int n, i, cont0, cont25, cont50, cont75;
    float num;

    scanf("%d", &n);

    cont0 = 0;
    cont25 = 0;
    cont50 = 0;
    cont75 = 0;

    for (i = 0; i < n; i++) {
        scanf("%f", &num);

        if (num >= 0 && num <= 25) {
            cont0++;
        } else if (num > 25 && num <= 50) {
            cont25++;
        } else if (num > 50 && num <= 75) {
            cont50++;
        } else if (num > 75 && num <= 100) {
            cont75++;
        }
    }

    printf("Intervalo [0..25]: %d\n", cont0);
    printf("Intervalo [26..50]: %d\n", cont25);
    printf("Intervalo [51..75]: %d\n", cont50);
    printf("Intervalo [76..100]: %d\n", cont75);

    return 0;
    
}