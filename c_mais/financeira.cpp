#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float rend, parc, segu, total;
	int idad;
	char nome[30];
	
	fflush(stdin); // Função para "limpar" a entrada
	printf("Bem-vindo ao FinanTech!\n");
	printf("Informe seu nome: ");
	scanf("%[^\n]", &nome); //leia caractere
	printf("Informe sua idade: \n");
	scanf("%i", &idad); // Leia inteiro
	if (idad>17)
	{
		printf("Informe sua renda:\n ");
		scanf("%f", &rend); // Leia real
	} else
	{
		printf("Idade mínima 18 anos, operação encerrada! \n");
		return 0;
	}
	if (rend > 1500)
	{
		parc = rend*0.2;
		
	} else if (rend > 2500)
	{
		parc = rend*0.3;
	}
	else{
		printf("Renda insuficiente %s",nome);
		printf(", empréstimo negado!\n");
		return 0;
	}
	printf("Sua parcela será de R$%.2f\n", parc);
	if (idad>17 && idad<31)
	{
		segu = parc*0.05;
		
	} else if (idad>31 && idad<46)
	{
		segu = parc*0.07;
	} else if (idad>46 && idad<60)
	{
		segu = parc*0.1; 
	} else
	{
		segu = parc*0.15;
	}
	printf("O valor do seguro será R$%.2f\n",segu);
	total = parc+segu;
	printf("Valor total: R$%.2f\n",total);
	
	return 0;
	
}
