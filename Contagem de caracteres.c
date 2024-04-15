#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[100];
	int i = 0;
	//Armazenamento de um nome no vetor
	printf("Digite seu nome completo: ");
	fgets(nome, 100, stdin);
	//Contagem de caracteres
	while(nome[i] != '\0'){
		i++;
	}
	//Exibição da quantidade de caracteres
	printf("A quantidade de caracteres inseridos (incluindo o \0) foi: %i\n", i);
	return(0);
}
