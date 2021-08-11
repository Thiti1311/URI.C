#include <stdio.h>
#include <stdlib.h>

int main(){
	int A1, A2, A3;	
	int andar1, andar2, andar3;
    int menor;

    scanf("%d\n%d\n%d", &A1,&A2,&A3);

	andar1 = (A2 * 2) + (A3 * 4);
    andar2 = (A1 * 2) + (A3 * 2);
    andar3 = (A1 * 4) + (A2 * 2);

    if(andar1 <= andar2 && andar1 <= andar3){
        menor = andar1;
    }else if(andar2 <= andar1 && andar2 <= andar3){
        menor = andar2;
    }else if(andar3 <= andar1 && andar3 <= andar2){
        menor = andar3;
    }
	printf("%d\n", menor);
	return 0;
}