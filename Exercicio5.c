#include<stdio.h>

//Escreva um programa le tres numeros e os imprime em ordem (ordem crescente).

int main() {
    
    int A, B, C;

     printf("Digite o primeiro numero inteiro: ");
     scanf("%d", &A);

     printf("Digite o segundo  numero inteiro: ");
     scanf("%d",&B);

     printf("Digite o terceiro numero inteiro: ");
     scanf ("%d", &C);

    printf("Ordem Crescente: ");
    if(A<B && B<C){
        printf("%d, %d, %d", A, B, C);
    } else if(A<C && C<B){
        printf("%d, %d, %d", A, C, B);
    } else if(B<A && A<C){
        printf("%d, %d, %d", B, A, C);
    } else if(B<C && C<A){
        printf("%d, %d, %d", B, C, A);
    } else if(C<A && A<B){
        printf("%d, %d, %d", C, A, B);
    } else{
        printf("%d, %d, %d", C, B, A);
    }

}
