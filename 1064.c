#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num;
    int contador;
    int valores_positivos;
    double media;
    double soma;

    valores_positivos = 0;
    soma = 0;

    for(contador = 0; contador < 6; contador++){
        scanf("%f", &num);
        if (num >= 0){
            valores_positivos = valores_positivos + 1;
            soma = soma + num;
        }
    }
    media = soma / valores_positivos;
    printf("%d valores positivos\n", valores_positivos);
    printf("%.1lf\n", media);

    return 0;
}