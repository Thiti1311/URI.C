#include <stdio.h>
#include <string.h>

int main(void){
int N, tipo, contador = 1;
char copo;

scanf("%d %c", &N , &copo);

while(contador <= N)
    {
        scanf("%d", &tipo);

        if (copo == 'A')
        {
            switch (tipo)
            {
            case 1:
                copo = 'B';
                break;
            case 2:
                break;
            case 3:
                copo = 'C';
                break;
            }
        }else if (copo == 'B'){
		    switch(tipo)
            {
		    case 1: 
                copo = 'A'; 
                break;
			
		    case 2: 
                copo = 'C'; 
                break;
		
		    case 3: 
                break;
		    }	
	    }else if (copo == 'C')
        {
		    switch(tipo)
            {
                case 1:
                    break;
		
		        case 2: 
                    copo = 'B'; 
                    break;
			
		        case 3: 
                    copo = 'A'; 
                    break;
            }
	    }
        contador = contador + 1;
    }
    printf("%c\n", copo);

    return 0;
}