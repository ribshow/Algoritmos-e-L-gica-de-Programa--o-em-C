#include <stdio.h>
#include <string.h>
#include <locale.h>

/* Declaração do Protótipo das funções. 
 * Por que? => Para poder declarar as funções depois da main 
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
	
		printf("Operações disponíveis\n");
		printf("1 - soma\n");
		printf("2 - subtração\n");
		printf("3 - multiplicação\n");
		printf("4 - divisão\n");
		scanf("%d", &op);
		printf("Informe o número 1:");
		scanf("%f", &num1);
		printf("Informe o número 2:");
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
			
	// Chamada da função e passando dois valores do tipo float
	//float resultado = somar(2.5 , 2.5); //5
	
	//printf("O resultado da soma é: %f \n", resultado);
	
	//printf("A subtração deu: %f:2:2 \n", subtrair(2.3, 5.3) );

	return 0;	
}

/**
 * Declaração do corpo da função, ou seja, tudo que ela precisa 
 * realizar. E dos parâmetros (forma com que a função 
 * "se comunica" com o mundo exterior.
 * Note também que existe o float antes do nome da função, 
 * isso denota o tipo de retorno da função, com o comando 
 * return no final.
 */
float somar(float num1, float num2)
{
	// Aqui temos a declaração da variável local valor_somado,
	// que está recebendo os valores passados através de 
	// parâmetro.
	// As variáveis locais só são visíveis dentro da função 
	// onde foram declaradas.
   float valor_somado = num1 + num2;
   
   // Usando a função return para devolver o resultado da soma 
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
   printf("Olá, tudo bem? \n");
}













