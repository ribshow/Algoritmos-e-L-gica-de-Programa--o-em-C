#include <stdio.h>
#include <locale.h>

/*
Imagine que sua nota n�o � num�rica, mas sim por men��es:

A => media >= 8.5
B => media >= 7.5
C => media >= 6.0
D => media >= 5.0
E => media < 5.0

Fa�a um algoritmo que leia duas notas de prova, calcule a m�dia e d� a men��o do aluno.
*/

int main() 
{
	setlocale(LC_ALL, "");
	
	float p1, p2, media;
	
	printf("Qual � a nota da p1: ");
	scanf("%f", &p1);
	
	printf("Qual � a nota da p2: ");
	scanf("%f", &p2);
	
	media = (p1 + p2)/2;
	
	printf("Sua m�dia � %f . ", media);
	
	if(media >= 8.5)
	{
		printf("Sua men��o � A");
		
	} else if(media >= 7.5)
	{
		printf("Sua men��o � B");
		
	} else if(media >= 6)
	{
		printf("Sua men��o � C");
		
	} else if(media >= 5)
	{
		printf("Sua men��o � D");
		
	}  else if(media < 5)
	{
		printf("Sua men��o � E");
	}
}

