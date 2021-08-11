#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{	
	char linha_texto[501];
	int tamanho;

	fgets(linha_texto, 501, stdin);

	tamanho = strlen(linha_texto) - 1;

	if(tamanho <= 80)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}