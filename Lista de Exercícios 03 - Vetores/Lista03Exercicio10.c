/*
    Escreva um programa que leia uma sequência de números inteiros positivos maiores que 1 e os salva em um vetor. 
    O programa deve ler um número inteiro n que representa o número de elementos da sequência, depois em seguida os n números e os salvar em um vetor v. 
    Assuma que o tamanho máximo da sequência é 50.

    O programa deve então imprimir um quadrado de n linhas por n colunas onde em cada posição (i,j) 
    (onde i = 0,...,n-1 e j = 0,...,n-1) deste quadrado deverá ser impresso 1 caso os números v[i] e v[j] sejam coprimos e 0 caso contrário.
    
    Os pares de números v[i] e v[j] são coprimos se não há nenhum divisor d > 1 que seja comum a ambos. 
    Por exemplo 15 e 8 são coprimos, pois os divisores de 8, que são 2, 4 e 8, não são divisores de 15. 
    
    Abaixo temos um exemplo de execução do programa para n = 6 e v = [2,3,4,5,6,7].

          v[0] v[1] v[2] v[3] v[4]  v[5]
    v[0]  0     1     0    1     0     1
    v[1]  1     0     1    1     0     1
    v[2]  0     1     0    1     0     1
    v[3]  1     1     1    0     1     1
    v[4]  0     0     0    1     0     1
    v[5]  1     1     1    1     1     0

    Note no exemplo que 2 (v[0]) é coprimo de 3 (v[1]), 5 (v[3]) e 7 (v[5]).
*/

#include <stdio.h>

int main() {
        
    int tamanhoMaximoVetor, i, j, k, multiplicador, contadorAuxiliar, possuiValorDuplicado;

    printf("Defina o tamanho MÁXIMO do vetor com um número máximo de elementos de uma sequeência de 50: ");
    scanf("%d", &tamanhoMaximoVetor);

    int vetor[tamanhoMaximoVetor];

    if (tamanhoMaximoVetor > 0 && tamanhoMaximoVetor < 50){

        for (i = 0; i < tamanhoMaximoVetor; i++){
            printf("Digite a sequência de números INTEIROS distintos no PRIMEIRO vetor: ");
            scanf("%d", &vetor[i]);
        }
    } else {
        printf("Valor incorreto. O número máximo de elementos da sequência é até 50.");
    }

    printf("Digite um número inteiro n que representa o número de elementos da sequência: ");
    scanf("%d", &multiplicador);

    int vetor2[multiplicador];

    if (multiplicador > 0 && multiplicador < 50){

        for (i = 0; i < multiplicador; i++){
            printf("Digite a sequência de números INTEIROS distintos no SEGUNDO vetor: ");
            scanf("%d", &vetor2[i]);
        }
    } else {
        printf("Valor incorreto. O número máximo de elementos da sequência é até 50.");
    }

    printf("\n");

    for (i = 0; i < tamanhoMaximoVetor; i++){
        for (j = 0; j < multiplicador; j++){
            if (vetor[i] % vetor2[j] == 0){
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;

}