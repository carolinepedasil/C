/*  
    EXERCÍCIO 4:

    Escreva um programa que faça a leitura de uma palavra de até 30 caracteres (sem espaços) 
    e imprima na tela quantas letras diferentes essa palavra contém. 
*/

#include <stdio.h>
#include <string.h>

int main() {
	
	char palavra[30];
	int i, j, k, contador = 0;

	printf("Escreva uma palavra de até 30 caracteres (SEM ESPAÇOS!!!): ");
	scanf("%s", palavra);

	for (i = 0; i < strlen(palavra); i++){
		for (j = i + 1; palavra[j] != '\0'; j++){
			if (palavra[j] == palavra[i]){
				for (k = j; palavra[k] != '\0'; k++){
					palavra[k] = palavra[k + 1];
				}
			}
		}
	}

	for (int i = 0; i < strlen(palavra); i++){
		if (palavra[i] != ' ')
			contador++;
	}

	printf("Essa palavra contém: %d letras DIFERENTES! (letras que NÃO são iguais)", contador);

	return 0;
	
}