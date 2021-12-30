#include <stdio.h>

/*
    Escreva um programa que lê 10 números ponto flutuante e os salva em um vetor.
    Em seguida o programa deve calcular a média dos valores aramazenados no vetor e imprimir este valor.
*/

int main() {

    int i, n;
    float vetor[10], media;
    
    printf("Digite 10 numeros reais: ");
    for(i=0; i<10; i++){
        scanf("%f", &vetor[i]);
    }
    
    media = 0;
    
    for(i=0; i<10; i++){
        media += vetor[i];
    }
    
    media = media/10;
    
    printf("A media dos numeros e %.2f\n", media);
    
    return 0;
    
}