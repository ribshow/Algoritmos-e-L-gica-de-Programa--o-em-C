#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/* 
   Leia as informa��es de um time. O t�cnico dever� informar a quantidade 
   de jogadores e dizer qual jogador � titular e qual � reserva. 
   As informa��es de cada jogador ser�o: nome, idade, altura, peso e se � titular 
   ou reserva. Ap�s o cadastro, mostre a altura m�dia dos times reserva e titular. 
*/

typedef struct
{
	char nome[50];
	int idade;
	float peso, altura;
	int titular; // 0 = titular / 1 = reserva
		
} Jogador;

int main() 
{
	setlocale(LC_ALL, "");
	
	int qnt_jogadores, qnt_titulares = 0, qnt_reservas = 0;
	float altura_media_titulares, altura_media_reservas;
	float soma_alturas_titulares = 0, soma_alturas_reservas = 0;
	Jogador lista[100];
	
	printf("Informe a quantidade de jogadores: ");
	scanf("%d", &qnt_jogadores);
	
	for(int i=0; i<qnt_jogadores; i++)
	{
		fflush(stdin);
		printf("Informe o nome do Jogador: ");
		scanf("%[^\n]", &lista[i].nome);
		
		printf("Qual � a idade do jogador?");
		scanf("%d", &lista[i].idade);
		
		printf("Qual � o peso do jogador?");
		scanf("%f", &lista[i].peso);
		
		printf("Qual � a altura do jogador?");
		scanf("%f", &lista[i].altura);
		
		printf("O Jogador � Titular? 0 = Sim / 1 = N�o ");
		scanf("%d", &lista[i].titular);
		
		if(lista[i].titular == 0)
		{
			qnt_titulares++;
			soma_alturas_titulares = soma_alturas_titulares + lista[i].altura; 
			printf("teste %f", soma_alturas_titulares);
			
			
		} else if(lista[i].titular == 1)
		{
			qnt_reservas++;
			soma_alturas_reservas = soma_alturas_reservas + lista[i].altura; 
		}		
	}
	
	altura_media_titulares = soma_alturas_titulares / qnt_titulares;
	altura_media_reservas = soma_alturas_reservas / qnt_reservas;
	
	printf("A m�dia de altura dos titulares � %.2f \n", altura_media_titulares);
	printf("A m�dia de altura dos reservas � %.2f", altura_media_reservas);
	
	
	
	
}
