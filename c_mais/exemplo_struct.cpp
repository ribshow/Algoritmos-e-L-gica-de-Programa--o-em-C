#include <stdio.h>
#include <string.h>
#include <locale.h>

/**
* Defini��o de um tipo personalizado.
*/
typedef struct
{
	
	char nome[20];
    float peso;
    
}DadosCadastrais;

int main()
{
	// Resolver problema dos acentos.
	setlocale(LC_ALL,"");

    // Declarando uma v�riavel simples ("n�o-vetor")
	DadosCadastrais pessoa;
	
	// Definindo valores para os campos dentro da vari�vel pessoa:
	strcpy(pessoa.nome, "Jo�o da Silva");
	pessoa.peso = 85.2;
	
	// Mostrando o valor que est� dentro do campo.
	printf("%s pesa %.2f \n", pessoa.nome, pessoa.peso);
	return 0;	
}



