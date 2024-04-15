#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int v1[5], v2[5], l, fat, j;
	//Armazenamento de valores em v1
	for(l = 0; l < 5; l++){
		do{
		printf("Digite o %i° valor maior ou igual a zero a ser armazenado no vetor: \n", l + 1);
		scanf("%i", &v1[l]);
		}while (v1[l] < 0);
	}
	//Preenchendo v2
	for(l = 0; l < 5; l++){
		fat = 1;
		for(j = 1; j <= v1[l]; j++){
			fat *= j;
		}
		v2[l] = fat;
	}
	//Exibição de v1
	printf("\nVetor 1\n");
	for(l = 0; l < 5; l++){
		printf("%i ", v1[l]);
	}
	//Exibição de v2
	printf("\nVetor 2\n");
	for(l = 0; l < 5; l++){
		printf("%i ", v2[l]);
	}
	return(0);
}
