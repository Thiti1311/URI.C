#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float dinheiro;
    int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0;
    int moedas1_0 = 0, moedas50 = 0, moedas25 = 0, moedas10 = 0, moedas5 = 0, moedas1 = 0;
    
    scanf("%f", &dinheiro);
    
    while (dinheiro >= 100){
        dinheiro = dinheiro - 100;
        notas100++;
    }
    while (dinheiro >= 50){
        dinheiro = dinheiro - 50;
        notas50++;
    }
    while (dinheiro >= 20){
        dinheiro = dinheiro - 20;
        notas20++;
    }
    while (dinheiro >= 10){
        dinheiro = dinheiro - 10;
        notas10++;
    }
    while (dinheiro >= 5){
        dinheiro = dinheiro - 5;
        notas5++;
    }
    while (dinheiro >= 2){
        dinheiro = dinheiro - 2;
        notas2++;
    }
    while (dinheiro >= 1){
        dinheiro = dinheiro - 1;
        moedas1_0++;
    }
    while (dinheiro >= 0.5){
        dinheiro = dinheiro - 0.5;
        moedas50++;
    }
    while (dinheiro >= 0.25){
        dinheiro = dinheiro - 0.25;
        moedas25++;
    }
    while (dinheiro >= 0.1){
        dinheiro = dinheiro - 0.1;
        moedas10++;
    }
    while (dinheiro >= 0.05){
        dinheiro = dinheiro - 0.05;
        moedas5++;
    }
    while (dinheiro>=0.001){
        dinheiro = dinheiro - 0.01;
        moedas1++;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas1_0);
    printf("%d moeda(s) de R$ 0.50\n", moedas50);
    printf("%d moeda(s) de R$ 0.25\n", moedas25);
    printf("%d moeda(s) de R$ 0.10\n", moedas10);
    printf("%d moeda(s) de R$ 0.05\n", moedas5);
    printf("%d moeda(s) de R$ 0.01\n", moedas1);
    return 0;
    }