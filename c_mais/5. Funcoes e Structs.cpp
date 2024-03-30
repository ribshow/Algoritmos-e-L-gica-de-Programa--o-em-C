#include <stdio.h>
#include <string.h>
#include <locale.h>

// Declarando uma struct
typedef struct
{
	int idade;
	float peso;
	
} DadosPessoa;

// Protótipo da função que recebe um parâmetro do tipo DadosPessoa
void mostrar_pessoa(DadosPessoa p);

int main() 
{
	// Resolver problema dos acentos.
	setlocale(LC_ALL, "");
	
	// Declaração da variável joaozinho do tipo DadosPessoa
	DadosPessoa joaozinho;
	
	// Preenchimento dos campos da Struct
	joaozinho.idade = 55;
	joaozinho.peso = 106.5;
	
	// Chamada da função mostrar_pessoa e passagem do valor
	// da variável joaozinho (por valor, considere os campos
	// da struct)
	mostrar_pessoa(joaozinho);
	
	return 0;	
}

// Corpo da função que mostra os dados da pessoa.
void mostrar_pessoa(DadosPessoa p)
{
	printf("A idade é %d", p.idade);
	printf("O peso é %f", p.peso);
}






