#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int v[5], l, s = 0;
	for(l = 0; l < 5; l++){
		printf("Digite o %i� valor a ser armazenado no vetor: \n", l + 1);
		scanf("%i", &v[l]);
	}
	for(l = 0; l < 5; l++){
		s += v[l];
		}
		printf("\nA soma dos elementos inseridos �: %i. ", s);

	return(0);
}