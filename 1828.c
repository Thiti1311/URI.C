#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char caso_1[9] = "Bazinga!";
	char caso_2[15] = "Raj trapaceou!";
	char caso_3[9] = "De novo!";
	char sheldon_e[10], raj_e[10];
	char tesoura[8] = "tesoura", papel[6] = "papel", pedra[6] = "pedra", lagarto[8] = "lagarto", spock[6] = "Spock";
	int testes, contador;

	scanf("%d", &testes);

	for (contador = 1; contador <= testes; contador++)
	{
		scanf("%s %s", sheldon_e, raj_e);

		if(strcmp(sheldon_e, raj_e) == 0){
			printf("Caso #%d: %s\n", contador, caso_3);
		}else if(strcmp(sheldon_e, raj_e) != 0){
			if(strcmp(sheldon_e, tesoura) == 0){
				if(strcmp(raj_e, papel) == 0 || strcmp(raj_e, lagarto) == 0){
					printf("Caso #%d: %s\n", contador, caso_1);
				}else if(strcmp(raj_e, pedra) == 0 || strcmp(raj_e, spock) == 0){
					printf("Caso #%d: %s\n", contador, caso_2);
				}
			}else if(strcmp(sheldon_e, papel) == 0){
				if(strcmp(raj_e, pedra) == 0 || strcmp(raj_e, spock) == 0){
					printf("Caso #%d: %s\n", contador, caso_1);
				}else if(strcmp(raj_e, tesoura) == 0 || strcmp(raj_e, lagarto) == 0){
					printf("Caso #%d: %s\n", contador, caso_2);
				}
			}else if(strcmp(sheldon_e, pedra) == 0){
				if(strcmp(raj_e, tesoura) == 0 || strcmp(raj_e, lagarto) == 0){
					printf("Caso #%d: %s\n", contador, caso_1);
				}else if(strcmp(raj_e, spock) == 0 || strcmp(raj_e, papel) == 0){
					printf("Caso #%d: %s\n", contador, caso_2);
				}
			}else if(strcmp(sheldon_e, lagarto) == 0){
				if(strcmp(raj_e, papel) == 0 || strcmp(raj_e, spock) == 0){
					printf("Caso #%d: %s\n", contador, caso_1);
				}else if(strcmp(raj_e, pedra) == 0 || strcmp(raj_e, tesoura) == 0){
					printf("Caso #%d: %s\n", contador, caso_2);
				}
			}else if(strcmp(sheldon_e, spock) == 0){
				if(strcmp(raj_e, tesoura) == 0 || strcmp(raj_e, pedra) == 0){
					printf("Caso #%d: %s\n", contador, caso_1);
				}else if(strcmp(raj_e, papel) == 0 || strcmp(raj_e, lagarto) == 0){
					printf("Caso #%d: %s\n", contador, caso_2);
				}
			}
		}
	}
	return 0;
}