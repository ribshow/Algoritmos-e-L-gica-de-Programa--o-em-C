#include <stdio.h>
#include <locale.h>

/*
Imagine que sua nota não é numérica, mas sim por menções:

A => media >= 8.5
B => media >= 7.5
C => media >= 6.0
D => media >= 5.0
E => media < 5.0

Faça um algoritmo que leia duas notas de prova, calcule a média e dê a menção do aluno.
*/

int main() 
{
	setlocale(LC_ALL, "");
	
	float p1, p2, media;
	
	printf("Qual é a nota da p1: ");
	scanf("%f", &p1);
	
	printf("Qual é a nota da p2: ");
	scanf("%f", &p2);
	
	media = (p1 + p2)/2;
	
	printf("Sua média é %f . ", media);
	
	if(media >= 8.5)
	{
		printf("Sua menção é A");
		
	} else if(media >= 7.5)
	{
		printf("Sua menção é B");
		
	} else if(media >= 6)
	{
		printf("Sua menção é C");
		
	} else if(media >= 5)
	{
		printf("Sua menção é D");
		
	}  else if(media < 5)
	{
		printf("Sua menção é E");
	}
}

