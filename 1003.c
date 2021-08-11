#include <stdio.h>

/* Imprima a mensagem "SOMA" com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade seguido pelo valor correspondente à soma de A e B. Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error". */

int main (void) {
    // Variavéis 

    int A; // Número inicial inserido
    int B; // Número secundário inserido
    int SOMA; // Variavel para soma

    // Dados para a soma

    scanf("%d", &A);
    scanf("%d", &B);

    //SOMA

    SOMA = A + B;
    
    printf("SOMA = %d\n", SOMA);

    return 0;
}