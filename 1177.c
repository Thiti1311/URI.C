#include <stdio.h>

int main(){
	int i, n, j, vetor[1000];

	scanf("%d", &n);

	for (i = 0; i < n; i++){
		vetor[i] = i;
		printf("N[%d] = %d\n", i, vetor[i]);
	}

	for(j = i ; j < 1000; j++){
		vetor[j] = vetor[j-i];
		printf("N[%d] = %d\n", j, vetor[j]);
	}	

	return 0;
}