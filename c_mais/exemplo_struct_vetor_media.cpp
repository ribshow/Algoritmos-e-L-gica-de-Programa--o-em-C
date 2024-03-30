#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

typedef struct
{
	char nome[20];
	float p1, p2, media;
	
}DadosAlunos;

int main()
{
	//Resolver problema dos acentos.
	setlocale(LC_ALL,"");
	
	DadosAlunos lista[10];
	float media_turma = 0, soma_media = 0;
	
	for(int i=0; i<2; i++)
	{
		fflush(stdin);
		printf("Informe o aluno:");
		scanf("%[^\n]", &lista[i].nome);
		
		printf("Informe a nota da P1:");
		scanf("%f", &lista[i].p1);
		
		printf("Informe a nota da p2:");
		scanf("%f", &lista[i].p2);
		
		lista[i].media = (lista[i].p1+lista[i].p2)/2;
		soma_media = soma_media + lista[i].media;
		
	    printf("A média do aluno foi %.2f \n\n", lista[i].media);

	 } //fecha for
	 
	 media_turma = soma_media/2;
	 
	 system("cls"); //limpa tela
	 
	 printf("Nome: %s", lista[0].nome);
     printf("A média da turma foi %.2f \n", media_turma);

}

