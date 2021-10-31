/*
    Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situações abaixo:

    - É do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribuição.
    - É do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribuição.
    - É do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribuição.
    - É do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribuição.
    
    Crie um programa para ler um caracter ’M’ ou ’F’ que representa o sexo de um indivíduo, ler a sua idade, e seu tempo de contribuição. 
    O programa deverá então imprimir “Aposentável” caso o indivíduo se enquadrar em uma das situações acima. 
    Caso contrário o programa deverá imprimir “Não Aposentável”.
*/

#include <stdio.h>

int main() {

    char sexo;
    int idade, tempoContribuicao;

    printf("Digite o sexo (M ou F): ");
    scanf("%c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o tempo de contribuição: ");
    scanf("%d", &tempoContribuicao);

    if (sexo == 'M' && idade >= 65 && tempoContribuicao >= 10) {
        printf("Aposentável");
    } else if (sexo == 'M' && idade >= 63 && tempoContribuicao >= 15) {
        printf("Aposentável");
    } else if (sexo == 'F' && idade >= 63 && tempoContribuicao >= 10) {
        printf("Aposentável");
    } else if (sexo == 'F' && idade >= 61 && tempoContribuicao >= 15) {
        printf("Aposentável");
    } else {
        printf("Não Aposentável \n");
    }

    return 0;
}
  
