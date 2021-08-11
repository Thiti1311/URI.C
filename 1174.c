#include <stdio.h>

int main(){
	float vetor[100], n;
	int i;
	for (i = 0; i < 100; i++){
		scanf("%f", &n);
		if (n <= 10){
			vetor[i] = n;
			printf("A[%d] = %.1f\n", i, vetor[i]);
		}
	}
	return 0;
}