#include<stdio.h>
#include<stdlib.h>

/*
O programa irá criar uma tabuada, solicitando dois números corretos para o devido cálculo

					13/12/2022   Dioclesiano Paz
*/

main() {
	int n1, cont;
	char res;
	
	while (true) {	
		system("cls");
		
		printf("\n----------------------------------------\n");
		printf("\n	     Tabuada Universal                \n");
		printf("\n----------------------------------------\n");
	
		printf("NOTA: O valor introduzido tem de estar entre 1 e 10.\n\n");
		
		printf("\nQual a tabuada que pretende => ");
		scanf("%d", &n1);
		
		if (n1 > 0 && n1 <= 10) {
			cont = 1;	
			while (cont <=10) {
				printf("%d x %d = %d \n", n1, cont, cont*n1);
				cont = cont + 1;
			}
		} else {
			printf("\nERRO! Tente novamente.\n\n");
		}
		printf("\nDeseja continuar [S/N] => ");
		scanf(" %c", &res);
		if (res == 'n' || res == 'N') {
			break;
		}
	}
}