#include <stdio.h>

//Escreva um programa le tres numeros e imprime o maior deles.

int main() {
    int A, B, C;

    printf("Digite numero 1: ");
    scanf("%d", &A);

    printf("Digite numero 2: ");
    scanf("%d", &B);

    printf("Digite numero 3: ");
    scanf("%d", &C);
    
    if ( A > B && A > C )
        printf("O maior numero foi: %d", A);
    else if (B > A && B > C )
        printf("O maior numero foi: %d", B);
    else if (C > A && C > B )
        printf("O maior numero foi: %d", C);
}
