#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* --------------------------------------------------------------------------------
Programa para demonstrar os conectores matemáticos

< Menor
> Maior
== Diferente
<= Menor Igual
>= Maior Igual

Conectores Lógicos
&&
-----------------------------------------------------------------------------------*/

int main()
{
	int num, cont, i;
	char op;

	printf("\n----------------------------------------\n");
	printf("\n	     Tabuada Universal                \n");
	printf("\n----------------------------------------\n");
	
	do{
		system("cls");
		printf("----------------------\n");
		printf("- Tabuada Universal. -\n");
		printf("----------------------\n");
		printf("\nNota: o valor introduzido tem de estar entre 1 e 10.");

		do{
			printf("\nQual a tabuada que pretende => ");
			scanf("%d", &num);
		}while(num < 1 || num > 10);

		/*cont = 1;

		while(cont <= 10){
			printf("\n\n%d x %d = %d", num, cont, num * cont);
			cont++;
		}*/

		for(i = 1; i <= 10; i++){
			printf("\n\n%d x %d = %d", num, i, num * i);
		}

		do{
			printf("\n\nDeseja continuar (s/n): ");
			scanf(" %c", &op);
		}while(op != 's' && op != 'S' && op != 'n' && op != 'N');

	} while(op != 'n' && op != 'N');
}