#include <stdio.h>
#include <string.h>
#include <locale.h>

// Declarando uma struct
typedef struct
{
	int idade;
	float peso;
	
} DadosPessoa;

// Prot�tipo da fun��o que recebe um par�metro do tipo DadosPessoa
void mostrar_pessoa(DadosPessoa p);

int main() 
{
	// Resolver problema dos acentos.
	setlocale(LC_ALL, "");
	
	// Declara��o da vari�vel joaozinho do tipo DadosPessoa
	DadosPessoa joaozinho;
	
	// Preenchimento dos campos da Struct
	joaozinho.idade = 55;
	joaozinho.peso = 106.5;
	
	// Chamada da fun��o mostrar_pessoa e passagem do valor
	// da vari�vel joaozinho (por valor, considere os campos
	// da struct)
	mostrar_pessoa(joaozinho);
	
	return 0;	
}

// Corpo da fun��o que mostra os dados da pessoa.
void mostrar_pessoa(DadosPessoa p)
{
	printf("A idade � %d", p.idade);
	printf("O peso � %f", p.peso);
}






