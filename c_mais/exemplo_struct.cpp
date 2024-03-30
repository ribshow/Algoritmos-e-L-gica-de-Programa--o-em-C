#include <stdio.h>
#include <string.h>
#include <locale.h>

/**
* Definição de um tipo personalizado.
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

    // Declarando uma váriavel simples ("não-vetor")
	DadosCadastrais pessoa;
	
	// Definindo valores para os campos dentro da variável pessoa:
	strcpy(pessoa.nome, "João da Silva");
	pessoa.peso = 85.2;
	
	// Mostrando o valor que está dentro do campo.
	printf("%s pesa %.2f \n", pessoa.nome, pessoa.peso);
	return 0;	
}



