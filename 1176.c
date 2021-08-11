#include <stdio.h>

int main(){
	long long int vetor[1000] = {0,1}, n;
	int t, i, j, k, contador = 0;

	scanf("%d", &t);

	while (contador < t){
		scanf("%lld", &n);

		if(n == 0)
			printf("Fib(%lld) = %lld\n", n, vetor[0]);
		else if(n == 1)
			printf("Fib(%lld) = %lld\n", n, vetor[1]);
		else{
			for (i = 2; i <= n; i++){
				j = i - 2;
				k = i - 1;
				vetor[i] = vetor[j]+ vetor[k]; 
			}
			printf("Fib(%lld) = %lld\n", n, vetor[n]);
		}
		contador++;

	}	
	return 0;
}