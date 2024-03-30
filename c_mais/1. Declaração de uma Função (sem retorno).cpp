#include <stdio.h>
#include <string.h>
#include <locale.h>

/* Declaração do Protótipo das funções. 
 * Por que? => Para poder declarar as funções depois da main 
 */
void saudacao();

int main() 
{
	// Resolver problema dos acentos.
	setlocale(LC_ALL, "");
	
	// Chamada da função. Quando acionamos a função 
	// dizemos "chamando" a função.
	saudacao();

	return 0;	
}

/**
 * Declaração do corpo da função, ou seja, tudo que ela precisa
 * realizar.
 */
void saudacao()
{
   printf("Olá, tudo bem? \n");
}
