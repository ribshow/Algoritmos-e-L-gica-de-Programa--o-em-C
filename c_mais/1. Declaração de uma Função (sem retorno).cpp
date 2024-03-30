#include <stdio.h>
#include <string.h>
#include <locale.h>

/* Declara��o do Prot�tipo das fun��es. 
 * Por que? => Para poder declarar as fun��es depois da main 
 */
void saudacao();

int main() 
{
	// Resolver problema dos acentos.
	setlocale(LC_ALL, "");
	
	// Chamada da fun��o. Quando acionamos a fun��o 
	// dizemos "chamando" a fun��o.
	saudacao();

	return 0;	
}

/**
 * Declara��o do corpo da fun��o, ou seja, tudo que ela precisa
 * realizar.
 */
void saudacao()
{
   printf("Ol�, tudo bem? \n");
}
