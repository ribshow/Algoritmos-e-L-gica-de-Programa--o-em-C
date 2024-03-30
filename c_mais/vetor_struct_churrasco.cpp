#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct
{
	char nome[30];
	float total;
	
}churrasco;

int main()
{
	setlocale(LC_ALL,"");
	
	churrasco lista[3];
	
	float valor,soma_total;
	int qnt,opc;
	soma_total = 0;
	
	for(int i=0; i<3; i++)
	{
		fflush(stdin);
		printf("Nome:");
		scanf("%[^\n]", &lista[i].nome);
		
		printf("Qual dos itens você vai levar?\n");
		printf("1- Carne\n");
		printf("2- Frango\n");
		printf("3- Cerveja\n");
		scanf("%d", &opc);
		
		printf("Qual a quantidade em KG/L?\n");
		scanf("%d", &qnt);
		
		printf("Qual preço do item?\n");
		scanf("%f", &valor);
		
		lista[i].total = qnt*valor;
		soma_total = soma_total+lista[i].total;
		
		printf("Valor total: %.2f\n",lista[i].total);
				
	}
	printf("Valor total do churrasco: %.2f", soma_total);
}
