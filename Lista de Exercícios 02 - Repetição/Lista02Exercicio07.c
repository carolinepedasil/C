#include <stdio.h>

/*
    Escreva um programa que lê um número n, e então imprime o menor número primo que é maior ou igual n, e imprime o maior primo que é menor ou igual a n.
*/

int main() {
    
    int n, i, j, primo;
    scanf("%d", &n);
    for (i = n; i >= 2; i--) {
        primo = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo == 1) {
            printf("%d\n", i);
            break;
        }
    }
    for (i = n; i >= 2; i--) {
        primo = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo == 1) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
    
}