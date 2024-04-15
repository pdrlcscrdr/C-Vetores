#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int v[10], l, m;
	//Preenchimento do vetor
	for(l = 0; l < 10; l++){
		printf("Digite o %i° valor a ser armazenado no vetor: \n", l + 1);
		scanf("%i", &v[l]);
	}
	//Observando qual é o maior valor
	m = v[0];
	
	for(l = 0; l < 10; l++){
		if(v[l] > m){
			m = v[l];
		}
	}
	//Exibindo o maior valor
	printf("\nO maior valor encontrado no vetor foi: %i. \n", m);
	return(0);
}
	
