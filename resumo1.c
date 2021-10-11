                                        //Aula 02

//Estrutura Basica de um Programa em C

#include <stdio.h>

    int main(){
        int a;
        int b,c;

        a = 7+9; 
        b = a+10; 
        c = b-a;
    }

    //OBS: A declaracao de uma variavel sempre deve ocorrer antes de seu uso.

//Comando de Atribuicao

    int a;
    float c;

    a = 5; // ou: a = 5 + 5 + 10;
    c = 67.89505456; // ou: c = 67.89505456 + 8 - 9;

//Expressoes Simples

    //Ex1:
        int a; 
        a = 10;

    //Ex2:
        char b;
        b = ’F’;

    //Ex3:
        double c;
        c = 3.141592;

//Informacoes Extras: Obtendo o tamanho de um tipo

    //O comando sizeof(tipo) retorna o tamanho, em bytes, de um determinado tipo. (Um byte corresponde a 8 bits).
    printf ("%d", sizeof(int)); 
    //Escreve 4 na tela.

//Escrevendo na tela

    //Para imprimir um texto, utilizamos o comando printf. O texto pode ser uma constante do tipo string.
    printf("Ola Pessoal!");
    //Saida: Ola Pessoal!
    //No meio da constante string pode-se incluir caracteres de formatacao especiais. O simbolo especial \n e responsavel por pular uma linha na saida.

//Escrevendo o conteudo de uma variavel na tela

    //Podemos imprimir, alem de texto puro, o conteudo de uma variavel utilizando o comando printf. Para isso utilizamos sımbolos especiais no texto, para representar que aquele trecho deve ser substituıdo por uma variavel ou constante, e no final, passamos uma lista de variaveis ou constantes, separadas por vırgula.
    int a=10;
    printf("A variavel %s contem o valor %d","a", a); 
    //Saida: A variavel a contem o valor 10
    //Nesse caso, %s deve ser substituıdo por uma variavel ou constante do tipo string, enquanto %d deve ser substituıdo por uma variavel ou constante do tipo int.

//Formatos inteiros

    //%d — Escreve um inteiro na tela.
    printf (”%d”, 10); 
    //Saida: 10

    int a=12;
    printf (”O valor e %d”, a); 
    //Saida: O valor e 1

    //A letra d pode ser substituıda pelas letras u e ld, quando desejamos escrever variaveis do tipo unsigned ou long, respectivamente.
    printf (”%d”, 4000000000); 
    //Saida: -294967296. 
    //Enquanto que
    printf (”%ld”, 4000000000); 
    //Saida: 4000000000.

//Formatos ponto flutuante

    //%f — Escreve um ponto flutuante na tela.
    printf (”%f”, 10.0); 
    //Saida: 10.000000

//Formatos ponto flutuante

    //%.Nf — Escreve um ponto flutuante na tela, com N casas decimais.
    printf (”%.2f”, 10.1111); 
    //Saida: 10.11

    //O formato %f pode ser substituido por %lf, para escrever um double ao inves de um float.
    printf (”%.2lf”, 10.0); 
    //Saida: 10.00

//Formato caracter

    //%c — Escreve um caracter.
    printf (”%c”, ’A’); 
    //Saida: A

//Formato string

    //%s — Escreve uma string
    printf (”%s”, ”Meu primeiro programa”); 
    //Saida: Meu primeiro programa

//A funcao scanf

    #include <stdio.h> 
    
    int main(){

    int n;

    printf("Digite um numero: "); 
    scanf("%d",&n);
    printf("O valor digitado foi %d\n",n);
    }

//Formatos de leitura de variavel

    %c //Le um unico caracter
    %s //Le uma serie de caracteres
    %d //Le um numero decimal
    %u //Le um decimal sem sinal
    %ld //Le um inteiro longo
    %f //Le um numero em ponto flutuante
    %lf //Le um double

//A funcao scanf

    #include <stdio.h>
 
    int main(){

    char c;
    float b;
    int a;

    printf("Entre com um caracter:");
    scanf("%c", &c);

    printf("Entre com um ponto flutuante:");
    scanf("%f", &b);

    printf("Entre com um numero:"); 
    scanf("%d",&a);

    printf("Os dados lidos foram: %c, %f, %d \n",c,b,a);
    }

//Expressoes Aritmeticas

    //Os operadores aritmeticos sao: +, -, *, /, %

    //expressao + expressao : Calcula a soma de duas expressoes
    10 + 15;

    //expressao - expressao : Calcula a subtracao de duas expressoes.
    5-7

    //expressao * expressao : Calcula o produto de duas expressoes.
    3*4;

    //expressao / expressao : Calcula a divisao de duas expressoes.
    4/2;

    //expressao % expressao : Calcula o resto da divisao (inteira) de duas expressoes.
    5%2;

    //- expressao : Inverte o sinal da expressao.
    -5;

//Mais sobre o operador resto da divisao: %

    5%2 //tem como resultado o valor 1. 
    15%3 //tem como resultado o valor 0. 
    1%5 //tem como resultado o valor 1. 
    19%4 //tem como resultado o valor 3.

//Incremento(++) e Decremento(−−)

    //Em C, o operador unario ++ e usado para incrementar de 1 o valor de uma variavel.
        a = a + 1 /*e o mesmo que*/ a++
    
    //O operador unario −− e usado para decrementar de 1 o valor de uma variavel.
        a = a - 1  /*e o mesmo que*/ a--

//Informacoes Extras: Incremento(++) e Decremento(−−)

    ++a // Neste caso o valor de a sera incrementado antes e so depois o valor de a e usado na expressao.
    a++ // Neste caso o valor de a e usado na expressao maior, e so depois e incrementado.
    //A mesma coisa acontece com o operador −−.

//Informacoes Extras: Atribuicoes simplificadas

    a += b //a = a + b
    a -= b //a = a - b
    a *= b //a = a * b
    a /= b //a = a / b
    a %= b //a = a % b

//Informacoes Extras: Conversao de tipos

    //Implicita:
    //Capacidade (tamanho) do destino deve ser maior que a origem senao ha perda de informacao.
        int a; short b; a = b;
        float a; int b=10; a = b;

    //Explicita:
    //Explicitamente informa o tipo que o valor da variavel ou expressao e convertida.
        a = (int)( (float)b / (float)c );
    //Nao modifica o tipo “real” da variavel, so o valor de uma expressao.

//Informacoes Extras: Um uso da conversao de tipos

    //Se os dois argumentos forem inteiros, acontece a divisao inteira. A expressao 10 / 3 tem como valor 3.
    //Se um dos dois argumentos for de ponto flutuante, acontece a divisao de ponto flutuante. A expressao 1.5 / 3 tem como valor 0.5.

    10 / (float) 3 //tem como valor 3.33333333

                                        //Aula 03

//Operadores Relacionais

    == // igualdade
    != // diferente
    > // maior que
    < // menor que
    >= // maior ou igual que
    <= // menor ou igual que

//Operadores Logicos

    && // operador E
    || // operador OU
    !  // operador NAO

//Bloco de comandos

    int main()
    { //Inicio do bloco de comandos
    int a; 
    a=1;
    } //Fim do bloco de comandos

//Comandos condicionais

    #include <stdio.h>

    int  main () {

        int a;

        scanf("%d", &a);

        if (a % 2) {
            printf ("O valor e impar.\n"); 
        }
    }

    //Imprimindo a mensagem para numeros pares:

    #include <stdio.h>
    
    int  main () {
    
        int a;
    
        scanf("%d", &a);
    
        if (a % 2) {
           printf ("O valor  ́e  ́ımpar.\n"); 
        } else {
            printf ("O valor  ́e par.\n"); 
        }
    }

    //Determinando o menor de dois numeros distintos:

    int main(void){
    
        int a,b;
        scanf("%d", &a);
        scanf("%d", &b);

        if(a < b){
            printf("O menor n ́umero  ́e: %d\n", a);
        }else{
            printf("O menor n ́umero  ́e:%d\n",b);
        } 
    }

    /*Usando apenas operadores relacionais, vamos escrever um programa que le um nu ́mero e verifica em qual dos seguintes casos o numero se enquadra:
        Par e menor que 100.
        Par e maior ou igual a 100.
        Impar e menor que 100.
        Impar e maior ou igual a 100.*/

    #include <stdio.h>
        
    int main(){

        int a;

        printf("Digite um numero inteiro:"); 
        scanf("%d", &a);

        if( a % 2 == 0){
            if( a < 100)
                printf("O numero e par e menor que 100\n");
            else
                printf("O numero e par e maior ou igual a 100\n");
        }else{
            if ( a < 100)
                printf("O numero e impar e menor que 100\n"); 
            else
                printf("O numero e impar e maior que 100\n"); 
        }
    }

    //outro jeito

    #include <stdio.h>

    int main(){
    
        int a;

        printf("Digite um numero inteiro:"); 
        scanf("%d", &a);

        if( ( a % 2 == 0) && (a<100) )
            printf("O numero e par e menor que 100\n"); 
        if( ( a % 2 == 0) && (a>=100) )
            printf("O numero e par e maior ou igual a 100\n"); 
        if( ( a % 2 != 0) && (a<100) )
            printf("O numero e impar e menor que 100\n"); 
        if( ( a % 2 != 0) && (a>=100) )
            printf("O numero e impar e maior que 100\n");
    }

                                        //Aula 04

//Comandos Condicionais if-else

    int main(){
    
        char op;
        double l, l1, l2, r;

        printf("Digite uma opcao (q, r, ou c):"); 
        scanf("%c", &op);
        
        if(op == ’q’){
            printf("Digite o tamanho do lado do quadrado: "); 
            scanf("%lf", &l);
            printf("A  ́area e ́ : %.2f\n", l*l);
        }else{
            if(op == ’r’){
                printf("Digite o tamanho de um lado do retangulo: "); 
                scanf("%lf", &l1);
                printf("Digite o tamanho do outro lado do retangulo: "); 
                scanf("%lf", &l2);
                printf("A area e : %.2f\n", l1*l2); 
            }else{
                if(op == ’c’){
                    printf("Digite o tamanho do raio: "); 
                    scanf("%lf", &r);
                    printf("A area e : %.2f\n", 3.1415*r*r);
                }else{
                    printf("Opcao invalida!");
                } 
            }
        } 
    }

//Comandos if-else-if encaixados

    int main(){

        char op;
        double l, l1, l2, r;

        printf("Digite uma opcao (q, r, ou c):"); 
        scanf("%c", &op);
        
        if(op == ’q’){
            printf("Digite o tamanho do lado do quadrado: "); 
            scanf("%lf", &l);
            printf("A area e : %.2f\n", l*l);
        }else if(op == ’r’){
            printf("Digite o tamanho de um lado do retangulo: "); 
            scanf("%lf", &l1);
            printf("Digite o tamanho do outro lado do retangulo: "); 
            scanf("%lf", &l2);
            printf("A area e : %.2f\n", l1*l2);
        }else if(op == ’c’){
            printf("Digite o tamanho do raio: "); 
            scanf("%lf", &r);
            printf("A area e : %.2f\n", 3.1415*r*r);
        }else{
            printf("Opcao invalida!");
        } 
    }

//Informacoes Extras: O comando switch

    printf("Digite o RA: ");
    scanf("%d", &a);
    switch(a) {
    case 10129:
        printf("Maria C^andida Moreira Telles\n");
        break;
    case 33860:
        printf("Larissa Garcia Alfonsi\n");
        break;
    case 33967:
        printf("Leonardo Kozlowiski Kenupp\n");
        break; 
    }

//Informacoes Extras. Valor padrao

    printf("Digite o RA: ");
    scanf("%d", &a);
    switch(a) {
    case 10129:
        printf("Maria C^andida Moreira Telles\n");
        break;
    case 33860:
        printf("Larissa Garcia Alfonsi\n");
        break;
    default:
        printf("O aluno n~ao est ́a matriculado\n"); 
    }

                                        //Aula 05

//Comando while

    //Imprimindo os 100 primeiros numeros inteiros:

    int i=1;
    while (i<=100) 
    {
        printf(“%d ”,i);
        i++;
    }

    //Imprimindo os n primeiros numeros inteiros:

    int i=1,n; 
    scanf(“%d”,&n); 
    while (i<=n)
    {
        printf(“%d ”,i);
        i++;
    }

//Comando do-while

    //Imprimindo os 100 primeiros numeros inteiros:

    int i;
    i=1;
    do{
        printf("\n %d",i);
        i = i+1;
    }while(i<= 100);

    //Imprimindo os n primeiros numeros inteiros:

    int i, n;
    i=1;
    scanf("%d",&n);
    do{
        printf("\n %d",i);
        i++;
    }while(i<=n);

//O Comando for

    //Imprimindo os 100 primeiros numeros inteiros:

    int i;
    for(i=1; i<= 100; i=i+1){
        printf("\n %d",i);
    }

    //Imprimindo os n primeiros nu ́meros inteiros:

    int i, n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("\n %d",i);
    }

//Soma de numeros

    #include <stdio.h>
    
    int main(){
        int acu, i, n, aux;
    
        printf("Entre com n: ");
        scanf("%d", &n);
        acu = 0;
        for(i=1; i<=n; i++){
            printf("Digite um numero: ");
            scanf("%d", &aux);
            acu = acu + aux;
        }
        printf("Soma total: %d\n", acu);
    }

//Calculando potencias de 2 (sem pow)

    //for
    pot = 1; // corresponde a 2^0 
    for(i=0; i<=n; i++){
        printf("%d\n", pot);
        pot = pot * 2; 
    }

    //while
    #include <stdio.h>
    
    int main(){
        int i, n, pot;
    
        scanf("%d",&n);
        pot = 1;
        i = 0;
        while(i <= n){
            printf("2^%d = %d\n",i,pot); 
            pot = pot *2;
            i++;
        }
    }

//Calculando o valor de n!

    #include <stdio.h>

        int main(){

        int i, n, acu;

        scanf("%d", &n);
        acu = 1;

        for(i=1; i <= n; i++){
            acu = acu * i;
        }

        printf("Fatorial de %d e: %d\n",n, acu);
    }

//Lacos e o comando break

    //O comando break faz com que a execucao de um laco seja terminada, passando a execucao para o proximo comando depois do final do laco.
    int i;
    for(i = 1; i<= 10 ; i++){
        if(i >= 5) 
            break;
        printf("%d\n",i); 
    }
    printf("Terminou o laco");

    //Assim como a “condicao” em lacos, o comando break e utilizado emsituacoes de parada de um laco.
    
    //Imprimindo os numeros de 1 ate 10.

    int i;
    for(i = 1; ; i++){
        if(i > 10) 
            break;
        printf("%d\n",i); 
    }

    //e equivalente a:

    int i;
    for(i = 1; i<=10 ; i++){
        printf("%d\n",i); 
    }

//Lacos e o comando continue

    //O continue faz com que a execucao de um laco seja alterada para final do laco.

    int i;
    for(i = 1; i<= 10 ; i++){
        if(i == 5) 
            continue;
        printf("%d\n",i); 
    }
    printf("Terminou o laco");

    //O continue e utilizado em situacoes onde comandos dentro do laco so devem ser executados caso alguma condicao seja satisfeita.

    //Imprimindo area de um circulo, mas apenas se raio for par (e entre 1 e 10).

    int r;
    double area;
    for(r = 1; r<= 10 ; r++){
        if((r%2) !=0) //se numero for  ımpar pulamos 
            continue;
        area = 3.1415*r*r;
        printf("%lf\n",area); 
    }

    //Mas note que poderiamos escrever algo mais simples:

    int r;
    double area;
    for(r = 2; r<= 10 ; r = r+2){
        area = 3.1415*r*r;
        printf("%lf\n",area); 
    }
