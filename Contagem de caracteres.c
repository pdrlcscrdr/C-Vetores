#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[100];
	int i = 0, cont = 1;
	//Armazenamento de um nome no vetor
	printf("Digite seu nome completo: ");
	gets(nome);
	//Contagem de caracteres
	while(nome[i] != '\0'){
		i++;
		cont++;
	}
	//Exibição da quantidade de caracteres
	printf("A quantidade de caracteres inseridos (incluindo o \\0) foi: %i\n", cont);
	return(0);
}
