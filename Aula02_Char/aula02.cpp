/*-------------------------------------------------------------------------
programa para mostrar a diferença entre os comandos GETS, GETCH e SCANF no
caso das strings e caracteres.
06/12/2022 - Dioclesiano Paz
---------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

main(){
	char op[4];
	char var[10];
	
	printf("\nDigite o se nome => ");
	printf("\nApos digitar seu nome, digite enter duas vezes... ");
	scanf("%s", op);
	
	gets(var);
	op[4] = getch();
	op[5] = '_';
	
	printf("%c", var);
	
	printf("\n\n Char = %s", op);
	printf("\n\n Char = %c", op[0]);
	printf("\n\n Char = %c", op[1]);
	printf("\n\n Char = %c", op[2]);
	printf("\n\n Char = %c", op[3]);
}