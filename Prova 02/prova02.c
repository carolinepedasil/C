/*  
    EXERCÍCIO 2:

    Faça um programa que leia duas sequências de números inteiros distintos e salve cada sequência em um vetor. 
    Suponha que o número máximo de elementos de uma sequência é 50. 
    Suponha que cada um destes vetores represente um conjunto contendo os elementos nele armazenados. 
    O programa deve então salvar em um terceiro vetor o resultado da união dos dois primeiros vetores e imprimir o resultado. 
    
    Exemplo: 
    vi: [1, 2, 3, 4, 5] 
    v2: [2,5,7,1,-9,18] 
    Resultado: [1, 2, 3, 4, 5, 7, -9, 18] 
*/

#include <stdio.h>

int main() {

    int tamanhoMaximoPrimeiroVetor, tamanhoMaximoSegundoVetor, i, j, tamanhoMaximoResultadoVetor;

    printf("Defina o tamanho MÁXIMO do primeiro vetor com um número máximo de elementos de uma sequeência de 50: ");
    scanf("%d", &tamanhoMaximoPrimeiroVetor);

    int vetor1[tamanhoMaximoPrimeiroVetor];

    if (tamanhoMaximoPrimeiroVetor > 0 && tamanhoMaximoPrimeiroVetor < 50){

        for (i = 0; i < tamanhoMaximoPrimeiroVetor; i++){
            printf("Digite a sequência de números INTEIROS distintos no PRIMEIRO vetor: ");
            scanf("%d", &vetor1[i]);
        }
    } else {
        printf("Valor incorreto. O número máximo de elementos da sequência é até 50.");
    }

    printf("Defina o tamanho MÁXIMO do segundo vetor com um número máximo de elementos de uma sequeência de 50: ");
    scanf("%d", &tamanhoMaximoSegundoVetor);

    int vetor2[tamanhoMaximoSegundoVetor];

    if (tamanhoMaximoSegundoVetor > 0 && tamanhoMaximoSegundoVetor < 50){

        for (i = 0; i < tamanhoMaximoSegundoVetor; i++){
            printf("Digita sequência de números INTEIROS distintos no PRIMEIRO vetor: ");
            scanf("%d", &vetor2[i]);
        }
    } else {
        printf("Valor incorreto. O número máximo de elementos da sequência é até 50.");
    }

    tamanhoMaximoResultadoVetor = tamanhoMaximoPrimeiroVetor + tamanhoMaximoSegundoVetor;

    int contadorUnicoSegundoVetor = 0, contadorAuxiliar, possuiValorDuplicado;

    for (j = 0; j < tamanhoMaximoSegundoVetor; j++){
        contadorAuxiliar = 0;
        possuiValorDuplicado = 0;

        while (contadorAuxiliar < tamanhoMaximoPrimeiroVetor && !possuiValorDuplicado){
            if (vetor2[j] == vetor1[contadorAuxiliar]){
                possuiValorDuplicado = 1;
            }
            contadorAuxiliar++;
        }

        if (!possuiValorDuplicado){
            contadorUnicoSegundoVetor++;
        }
    }

    int vetorAuxiliarSegundo[contadorUnicoSegundoVetor], posicaoVetorAuxiliarSegundo = 0;

    for (j = 0; j < tamanhoMaximoSegundoVetor; j++){
        contadorAuxiliar = 0;
        possuiValorDuplicado = 0;

        while (contadorAuxiliar < tamanhoMaximoPrimeiroVetor && !possuiValorDuplicado){
            if (vetor2[j] == vetor1[contadorAuxiliar]){
                possuiValorDuplicado = 1;
            }
            contadorAuxiliar++;
        }

        if (!possuiValorDuplicado){
            vetorAuxiliarSegundo[posicaoVetorAuxiliarSegundo] = vetor2[j];
            posicaoVetorAuxiliarSegundo++;
        }
    }

    contadorAuxiliar = 0;

    for (i = 0; i < tamanhoMaximoPrimeiroVetor; i++){
        printf("%d\n", vetor1[i]);
    }

    for (i = 0; i < posicaoVetorAuxiliarSegundo; i++){
        printf("%d\n", vetorAuxiliarSegundo[i]);
    }

    return 0;
    
}