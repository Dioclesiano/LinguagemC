#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, ""); // Corrigindo acentos

    // Declaração de Variáveis
    int n1, n2, res_soma, res_sub, res_multi;
    float res_div, res_resto;

    // Apresentação do programa
	printf("\n**********************************************************");
	printf("\n**Programa para efetuar as operações matemáticas básicas**");
	printf("\n**********************************************************\n");

	// Entrada de Dados
	printf("\nDigite o primeiro número => ");
	scanf("%d", &n1);

	printf("\nDigite o segundo número => ");
	scanf("%d", &n2);

	// Processamento
	res_soma = n1 + n2;
	res_sub = n1 - n2;
	res_multi = n1 * n2;
	res_div = n1 / n2;
	res_resto = n1 % n2;

    // Exibição de Resultados
	printf("\n\n=======================================================================");
	printf("\nO resultado da soma entre %d e %d = %d", n1, n2, res_soma);
	printf("\nO resultado da subtracao entre %d e %d = %d", n1, n2, res_sub);
	printf("\nO resultado da multiplicacao entre %d e %d = %d", n1, n2, res_multi);
	printf("\nO resultado da divisao entre %d e %d = %.2f", n1, n2, res_div);
	printf("\nO resultado do resto da divisao de %d e %d = %.2f", n1, n2, res_resto);
	printf("\n========================================================================");

	getch();
	system("cls");
	system("\npause");
}
