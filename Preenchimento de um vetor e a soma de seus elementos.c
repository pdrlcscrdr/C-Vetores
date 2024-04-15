#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int v[5], l, s = 0;
	//Armazenamento de valores no vetor
	for(l = 0; l < 5; l++){
		printf("Digite o %i° valor a ser armazenado no vetor: \n", l + 1);
		scanf("%i", &v[l]);
	}
	//Percorrendo o vetor para somar seus elementos
	for(l = 0; l < 5; l++){
		s += v[l];
		}
	//Exibição da soma dos elementos
		printf("\nA soma dos elementos inseridos é: %i. ", s);

	return(0);
}
