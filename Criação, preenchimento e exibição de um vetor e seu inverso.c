#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int A[8], l;
	//Preenchimento do vetor A
	for(l = 0; l < 8; l++){
		printf("Digite o o %i° valor para ser armazenado no vetor A: \n", l + 1);
		scanf("%i", &A[l]);
	}
	//Exibição do vetor A
	printf("\nVetor A\n");
	for(l = 0; l < 8; l++){
		printf("%i ", A[l]);
	}
	printf("\n");
	//Exibição de um vetor com os valores invertidos do vetor A
	printf("\nVetor A invertido\n");
	for(l = 7; l >= 0; l--){
		printf("%i ", A[l]);
		}
		return(0);
}
