#include <stdio.h>
#include <string.h>
#include <locale.h>

/* Declara��o do Prot�tipo das fun��es. 
 * Por que? => Para poder declarar as fun��es depois da main 
 */
float somar( float num1 , float num2 );
float subtrair(float num1, float num2);
float multiplicar(float num1, float num2);
float dividir(float num1, float num2);
int op;
float num1, num2;
void saudacao();

int main() 
{
	// Resolver problema dos acentos.
	setlocale(LC_ALL, "");
	
		printf("Opera��es dispon�veis\n");
		printf("1 - soma\n");
		printf("2 - subtra��o\n");
		printf("3 - multiplica��o\n");
		printf("4 - divis�o\n");
		scanf("%d", &op);
		printf("Informe o n�mero 1:");
		scanf("%f", &num1);
		printf("Informe o n�mero 2:");
		scanf("%f", &num2);
		
		if(op==1)
		{	
			float somar();
			
		}else if(op==2)
		{
			float subtrair();
		}else if(op==3)
		{
			float multiplicar();
		}else if(op==4)
		{
			float dividir();
		}
			
	// Chamada da fun��o e passando dois valores do tipo float
	//float resultado = somar(2.5 , 2.5); //5
	
	//printf("O resultado da soma �: %f \n", resultado);
	
	//printf("A subtra��o deu: %f:2:2 \n", subtrair(2.3, 5.3) );

	return 0;	
}

/**
 * Declara��o do corpo da fun��o, ou seja, tudo que ela precisa 
 * realizar. E dos par�metros (forma com que a fun��o 
 * "se comunica" com o mundo exterior.
 * Note tamb�m que existe o float antes do nome da fun��o, 
 * isso denota o tipo de retorno da fun��o, com o comando 
 * return no final.
 */
float somar(float num1, float num2)
{
	// Aqui temos a declara��o da vari�vel local valor_somado,
	// que est� recebendo os valores passados atrav�s de 
	// par�metro.
	// As vari�veis locais s� s�o vis�veis dentro da fun��o 
	// onde foram declaradas.
   float valor_somado = num1 + num2;
   
   // Usando a fun��o return para devolver o resultado da soma 
   // ao fluxo principal do programa (main)
   return valor_somado;
   printf("Resultado:", valor_somado);
}

float subtrair(float num1, float num2)
{
   float valor_subtraido = num1 - num2;
   
   return valor_subtraido;
}

float multiplicar(float num1, float num2)
{
	float valor_multiplicado = num1 * num2;
	
	return valor_multiplicado;
}

float dividir(float num1, float num2)
{
	float valor_dividido = num1 / num2;
	
	return valor_dividido;
}

void saudacao()
{
   printf("Ol�, tudo bem? \n");
}













