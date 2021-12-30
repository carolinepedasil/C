                                       //Aula 06

//Laços Encaixados: Dados

    int main(){
        int d1, d2, d3, d4;
    
        printf("\nD1  D2  D3  D4\n");
        
        for(d1 = 1; d1 <= 6; d1++)
            for(d2 = 1; d2 <= 6; d2++)
                for(d3 = 1; d3 <= 6; d3++)
                    for(d4 = 1; d4 <= 6; d4++)
                        printf("%d   %d   %d   %d\n",d1,d2,d3,d4);
    }

//Laços Encaixados: Mega-Sena

    int main(){
        int d1, d2, d3, d4, d5, d6;
    
            for(d1 = 1; d1 <= 60; d1++)
                for(d2 = d1 + 1; d2 <= 60; d2++)
                    for(d3 = d2 +1; d3 <= 60; d3++)
                        for(d4 = d3 +1; d4 <= 60; d4++)
                            for(d5 = d4 +1; d5 <= 60; d5++)
                                for(d6 = d5 +1; d6<= 60; d6++)
                                    printf("%d,  %d,  %d,   %d,  %d,  %d\n",d1,d2,d3,d4,d5,d6);
    }

                                       //Aula 07

//Declaraçao de um vetor

    float notas[100]; //vetor "notas" corresponde //a 100 variáveis do tipo float
    int primos[20]; //vetor "primos" corresponde // a 20 variáveis do tipo int

//Usando um vetor

    int nota[10];
    int a;
    nota[5] = 95; //"nota[5]" corresponde a uma var. inteira 
    a = nota[5];

//Produto Interno de dois vetores

    int main(){
        double vetor1[5], vetor2[5], resultado;
        int i;

        for(i=0; i<5; i++){
            printf("Entre com valor da posição %d para vetor 1:",i); 
            scanf("%lf",&vetor1[i]);
        }
        printf("\n\n");

        for(i=0; i<5; i++){
            printf("Entre com valor da posi ̧ca~o %d para vetor 2:",i);
            scanf("%lf",&vetor2[i]);
        }

        //calculando o produto interno 
        resultado = 0.0;
        for(i=0; i < 5; i++){
            resultado = resultado + ( vetor1[i]*vetor2[i] );
        }

        printf("\n\nO produto interno e ́: %lf\n",resultado); 
    }

//Elementos Iguais

    int main(){
        int vetor1[5], vetor2[5]; 
        int i, j, umEmComum;

        for(i=0; i<5; i++){ 
            printf("Entre com valor da posição %d para vetor 1:",i);
            scanf("%d",&vetor1[i]);
        }
        printf("\n\n"); 
        
        for(i=0; i<5; i++){
            printf("Entre com valor da posição %d para vetor 2:",i);
            scanf("%d",&vetor2[i]); 
        }

        umEmComum = 0;
        for(i = 0; i < 5 ; i++)
            for(j = 0; j < 5; j++) 
                if(vetor1[i] == vetor2[j]){
                    umEmComum = 1;
                    printf("Posicao %d do vetor1 igual a posição %d do vetor2.\n",i,j); 
                }
            if(!umEmComum)
                printf("Nenhum elemento em comum!\n");
        }

//Declarando Vetores Multidimensionais

    //Você pode criar por exemplo uma matriz para armazenar a quantidade de chuva em um dado dia, mês e ano, para cada um dos últimos 3000 anos:

    double chuva[31][12][3000]; 
    chuva[23][3][1979] = 6.0;

//Lendo e Imprimindo uma Matriz

    #include <stdio.h> 
    #define MAX 10

    int main(){
        
        double mat1[MAX][MAX]; //MAX  é uma constante inteira definida previamente com valor 10 no nosso exemplo.
        int i, j, n;

        printf("Dimensão das matrizes (max. 10): "); 
        scanf("%d", &n);
        printf("Lendo dados da matriz, linha por linha\n"); 
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                scanf("%lf", &mat1[i][j]);
            } 
        }
        
        printf("Imprimindo dados da matriz, linha por linha\n");
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                printf("%.2lf \t", mat1[i][j]);
            }
            printf("\n");
        }
    }

//Soma de Matrizes

    int main(){
        double mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX];
        int i, j, n;

        printf("Dimens~ao das matrizes: "); 
        scanf("%d", &n);

        printf("Lendo dados da matriz 1, linha por linha\n");
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                scanf("%lf", &mat1[i][j]);
            } 
        }

        printf("Lendo dados da matriz 2, linha por linha\n");
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                scanf("%lf", &mat2[i][j]);
            } 
        }
        ...
    }

//Multiplicação de Matrizes

    int main(){
        double mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX]; 
        int i, j, k, n;
        printf("Dimens~ao das matrizes: ");
        scanf("%d", &n);
        printf("Lendo dados da matriz 1, linha por linha\n"); 
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){ 
                scanf("%lf", &mat1[i][j]);
            } 
        }

        printf("Lendo dados da matriz 2, linha por linha\n"); 
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){ 
                scanf("%lf", &mat2[i][j]);
            } 
        }

        for(i=0; i<n; i++){ 
            for(j=0; j<n; j++){
                mat3[i][j] = 0; 
                for(k=0; k<n; k++){
                    mat3[i][j] = mat3[i][j] + (mat1[i][k] * mat2[k][j]); 
                }
            } 
        }

        printf("Imprimindo dados da matriz 3, linha por linha\n"); 
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                printf("%.2lf \t", mat3[i][j]);
            }
            printf("\n"); 
        }
    }

//Informações Extras: Inicialização de um vetor

    #include <stdio.h>
    
    int main(){
        double vet1[] = {2.3, 3.4, 4.5, 5.6}; 
        int vet2[] = {5, 4, 3, 10, -1, 0}; 
        int i;

        for(i=0; i<4; i++)
            printf("%lf\n", vet1[i]);

        for(i=0; i<6; i++)
            printf("%d\n", vet2[i]);
    }

                                       //Aula 08

//Strings em C

    int main(){
        char st[80];
        st[0] = ’o’;
        st[1] = ’l’;
        st[2] = ’a’;
        st[3] = ’\0’;
        printf("%s\n", st);
    }

//Para ler strings incluindo espaços use o comando fgets cuja sintaxe é:

    fgets(identificador, limite, stdin);

//Leitura e Escrita de Strings

    #include <stdio.h>

    int main(){

        char st[80];
        int id;

        printf("Entre com o nome:");
        fgets(st, 80, stdin);

        printf("Entre com a idade:");
        scanf("%d",&id);

        printf("Digitado: %s e %d\n",st,id);
    }

//Inicialização de Strings

    char st[100] = ”sim isto é possível”;

//Strings: Exemplos

    int main(){
        
        char st[80], stInv[80];
        int tam, i, j;

        printf("Entre com a string (max. 79): "); 
        scanf("%s",st);

        //Determinamos o tamanho da string, que é o valor em tam no final do laço 
        tam = 0;
        while(st[tam] != ’\0’ && tam < 80){
            tam++; 
        }

        //Depois escrevemos os caracteres na inversa 
        stInv[tam] = ’\0’;
        j = tam-1;
        i = 0;
        
        while(i<tam){ 
            stInv[j] = st[i]; 
            i++;
            j--;
        }

        printf("A inversa e: %s\n",stInv);

    }

//Strings: Exemplos

    //A mesma coisa mas com laço for:

    int main(){
        char st1[80], stInversa[80];
        int i, j , tam;

        printf("Digite um texto (max. 79):"); 
        scanf("%s",st1);

        for(tam=0; (st1[tam] != ’\0’) && (tam < 80) ; tam++)
            ;

        stInversa[tam] = ’\0’; 
        for(j=tam-1,i=0;j>=0; j--,i++){
            stInversa[j] = st1[i];
        }

        printf("A inversa e: %s\n", stInversa);

    }

//Strings: Exemplos

    //Se usarmos o fgets ao invés do scanf, devemos determinar o tamanho da string excluindo o ’\n’.

    int main(){
        char st1[80], stInversa[80];
        int i, j , tam;

        printf("Digite um texto (max. 79):"); 
        fgets(st1, 80, stdin);

        //Alteração da condição de parada aqui -->
        for(tam=0; (st1[tam] != ’\0’) && (st1[tam]!=’\n’) ; tam++)
            ;

        stInversa[tam] = ’\0’; 
        for(j=tam-1,i=0;j>=0; j--,i++){
            stInversa[j] = st1[i];
        }

        printf("A inversa e: %s\n", stInversa);

    }

//Biblioteca string.h

    /*
        A biblioteca string.h possui várias funções úteis para se trabalhar com strings.

        Vamos apresentar algumas funções comuns:

        - char *strcat(char *s1, const char *s2) : Para fazer a concatenação de strings.
        - int strcmp(const char *s1, const char *s2) : Para fazer a comparação lexicográfica (utilizada em ordenação) de duas strings.
        - char *strcpy(char *s1, const char *s2) : Para fazer a cópia de strings.
        - int strlen(const char *s1) : Para se determinar o tamanho de uma string.
    */

//Exemplo de uso da função strcat para fazer concatenação de strings.

    /*
        - A função recebe duas strings como parâmetro e concatena a string segundo parâmetro no final da string primeiro parâmetro.
        - Deve haver espaço suficiente na primeira string, caso contrário ocorrerá um erro.
    */

    #include <stdio.h> 
    #include <string.h>

    int main(){

        char s1[80]="ola ", s2[80]="turma de 102!";

        //concatena s2 no final de s1
        strcat(s1, s2);

        printf("%s\n", s1);

    }

//Exemplo de uso da função strcmp para fazer comparação de strings.

    /*
        A função recebe duas strings s1 e s2 como parâmetro e devolve:

        - 0 caso as duas strings sejam iguais.
        - um valor menor que 0 caso s1 seja lexicograficamente menor que s2.
        - um valor maior que 0 caso s1 seja lexicograficamente maior que s2.
    */

    #include <stdio.h> 
    #include <string.h>

    int main(){

        char s1[80]="aab", s2[80]="aac";
        int r;

        r = strcmp(s1, s2);

        if(r < 0)
            printf("%s vem antes que %s\n", s1, s2);
        else if(r>0)
            printf("%s vem antes que %s\n", s2, s1);
        else
            printf("sao iguais\n");

    }

//Exemplo de uso da função strcpy para fazer cópia de strings.

    /*
        A função recebe duas strings como parâmetro e copia a string segundo parâmetro na string primeiro parâmetro.
    */

    #include <stdio.h> 
    #include <string.h>

    int main(){

        char s1[80], s2[80]="ola pessoal";

        strcpy(s1, s2);
        printf("%s\n", s1);

    }

//Exemplo de uso da função strcpy para fazer cópia de strings.

    /*
        A função recebe duas strings como parâmetro e copia a string segundo parâmetro na string primeiro parâmetro.
    */

    #include <stdio.h> 
    #include <string.h>

    int main(){

        char s1[80], s2[80]="ola pessoal";

        strcpy(s1, s2);
        printf("%s\n", s1);

    }

//Exemplo de uso da função strlen para calcular o tamanho de uma string.

    /*
        A função recebe uma string como parâmetro e devolve o número de caracteres na string até o ’\0’.
    */

    #include <stdio.h>
    #include <string.h>

    int main(){

        char s1[80]="ola pessoal";
        int t;

        t = strlen(s1);
        printf("%d\n", t);
    }

//Processamento de Texto

    //Programa que conta o número de palavras em textos sem pontuação:

    int main(){

        char s[80];
        int i=0, n=0;

        fgets(s, 80, stdin);

        while(s[i]!=’\n’ && s[i] != ’\0’){ //Enquanto não terminou o texto
            
            while(s[i]==’ ’) //Pula possíveis espaços 
                i++;
            //Achou o começo de uma palavra ou o fim do texto

            if(s[i]!=’\n’ && s[i]!=’\0’){ //Se achou uma palavra
                n++; //incrementa numero de palavras
                while(s[i]!=’ ’  && s[i] != ’\n’ && s[i]!=’\0’) //passa pela palavra
                    i++; 
            }
        }

        printf("Total de palavras: %d\n", n);

    }

    //Programa que acha todas as posições de ocorrência de uma palavra em um texto.

    int main(){
        char palavra[80], texto[80];

        fgets(texto, 80, stdin);
        fgets(palavra, 80, stdin);
        int tamT = strlen(texto) - 1;
        int tamP = strlen(palavra) - 1; //O -1 é pelo ’\n’

        int i, j;
        for(i=0; i <= tamT - tamP; i++){ //Para cada possı ́vel posição de inicio
            j=0;
            while(j<tamP && palavra[j] == texto[i+j]) //Testa se palavra ocorre
                j++;
            if(j==tamP) //Se verdadeiro a palavra ocorre na pos. i
                printf("%d\n", i);
        }
    }