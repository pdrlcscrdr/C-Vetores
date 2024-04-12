#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int A[8], l;
	for(l = 0; l < 8; l++){
		printf("Digite o o %i° valor para ser armazenado no vetor A: \n", l + 1);
		scanf("%i", &A[l]);
	}
	printf("\nVetor A\n");
	for(l = 0; l < 8; l++){
		printf("%i ", A[l]);
	}
	printf("\n");
	printf("\nVetor A invertido\n");
	for(l = 7; l >= 0; l--){
		printf("%i ", A[l]);
		}
		return(0);
}