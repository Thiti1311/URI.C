#include <stdio.h>

int main (void) {
    // Variavéis 

    double A; // Número inicial inserido
    double B; // Número secundário inserido
    double soma; // Variavel para soma
    double media; // Variavel para media
    // Dados para a soma

    scanf("%lf", &A);
    scanf("%lf", &B);

    //Peso das notas e Media
    
    soma = (A * 3.5) + (B * 7.5);
    media = soma / 11;
    
    printf("MEDIA = %.5lf\n", media);

    return 0;
}