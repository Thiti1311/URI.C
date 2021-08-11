#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    // Variavéis 

    char nome; //Variavel para o nome do funcionario
    double salario_fixo; // Valor do sálario fixo
    double total_vendas; // Montante de vendas no mês
    double comissao; // Valor recebido da comissão de vendas (15%)
    double salario_recebido; // Valor recebido pelo funcionario

    // Entrada

    scanf("%s", &nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);

    // Saída

    comissao = total_vendas * 0.15;
    salario_recebido = comissao + salario_fixo;
    
    printf("TOTAL = R$ %.2lf\n", salario_recebido);

    return 0;
}