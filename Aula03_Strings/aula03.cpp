/* -------------------------------------------------------------------------
Este programa serve para demosntrar as noções básicas da linguagem C

                06/12/2022      Dioclesiano Paz
-------------------------------------------------------------------------*/

#include<stdio.h> // Biblioteca para Entrada e Saída
#include<conio.h> // Biblioteca para comandos I/O extras
#include<stdlib.h> // Bibliotecas padrão, permite a utilização de comandos do sistema.Â
#include<locale.h> // Biblioteca para corrigir falhas UTF-8

main () {
    setlocale(LC_ALL, "Portuguese_Brasil");

    // Declaração de Variáveis 
    char teste[6] = {'q', 'w', 'e', 'r', 't', 'y'};

    // Exibição dos Resultados
    printf("\n=>> %c", teste); // Se mandar imprimir uma string com o tipo Char, nÃ£o vai ser exibido. Deve usar S ao invÃ©s de C.Â 
    printf("\n=>> %s\n", teste);
    printf("\nDimensão do vetor: %d", sizeof(teste));
    printf("\nNa posição 3 temos a letra => %c", teste[2]);
    printf("\nNa posição 6 temos a letra => %c", teste[5]);

    printf("\n\n ------------------------ Prima qualquer tecla para continuar -------------------------- \n\n");

    getch(); // Comandos que geram uma pausa para o utilizador visualizar o conteÃºdo exibidoÂ 
    system("pause");
}
