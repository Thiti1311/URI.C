#include <stdio.h>

int main(){

	int n, i, vetor[1000], menor, posicao;

	scanf("%d", &n);

	for (i = 0; i < n; i++){
		scanf("%d", &vetor[i]);
	}
	menor = vetor[0];

	for (i = 0; i < n; i++){
		if(vetor[i] < menor){
			posicao = i;
			menor = vetor[i];
		}
	}
			
	printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
	return 0;
}