#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    int x;
    int contador;
    int cont;
    int validar;

    scanf("%d", &n);

    for (contador = 0; contador < n; contador++){
        scanf("%d", &x);
        validar = 0;
        
        if (x <= 0){
            printf("%d nao eh primo\n", x);
        }
        else if (x == 1 || x == 2){
            printf("%d eh primo\n", x);
        }
        else{
            for (cont = 1; cont <= x; cont++){
                if (x % cont == 0){
                    validar = validar + 1;
                } 
            }
            if (validar == 2)
            printf("%d eh primo\n", x);
            else
            printf("%d nao eh primo\n", x);
        }
    }
    return 0;
}