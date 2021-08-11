#include <stdio.h>
#include <stdlib.h>

int main(void){

  int tentativas;
  double tempo, menor;;

  while (scanf("%d", &tentativas) != EOF){
    menor = 11;

    while(tentativas--){
      scanf("%lf", &tempo);
      if(tempo < menor)
        menor = tempo;
    
      }
    printf("%.2lf\n", menor);              
  }
  return 0;
}