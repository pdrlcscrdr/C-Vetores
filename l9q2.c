#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[100];
	int i = 0;
	printf("Digite seu nome completo: ");
	fgets(nome, 100, stdin);
	while(nome[i] != '\0'){
		i++;
	}
	printf("A quantidade de caracteres inseridos foi: %i\n", i);
	return(0);
}