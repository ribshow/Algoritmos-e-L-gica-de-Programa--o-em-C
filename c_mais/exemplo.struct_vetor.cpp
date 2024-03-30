#include <stdio.h>
#include <string.h>
#include <locale.h>

/**
* Defini��o de um tipo personalizado
* A posi��o do vetor tem uma struct e dentro da struct tem os campos
*/
typedef struct
{
	
	char nome[20];
	float peso;
	
}DadosCadastrais;

int main()
{
	//Resolver Problema dos acentos.
	setlocale(LC_ALL,"");
	
	DadosCadastrais pessoas[2];
	
	//Vetor do tipo Dados Cadastrais com duas posi��es.
	strcpy(pessoas[0].nome, "Jaul");
	pessoas[0].peso = 89.5;
	
	strcpy(pessoas[1].nome, "Kerolynn");
	pessoas[1].peso = 45.5;
	
	// Mostrando na tela o valor que est� no campo nome da posic��o zero.
	printf("%s pesa %.2f\n", pessoas[0].nome, pessoas[0].peso);
	printf("%s pesa %.2f\n", pessoas[1].nome, pessoas[1].peso);
	
	return 0;
}
