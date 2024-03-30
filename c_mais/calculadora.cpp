#include <stdio.h>
#include <locale.h>
#include <string.h>

int main ()
{
	setlocale(LC_ALL,"");
	int cinco, i;
	
	fflush(stdin);
	printf("Calculadora virtual\n");
	printf("Informe a tabuada que deseja calcular: \n");
	scanf("%i", &cinco);
	int i=1
	do
	{
		printf_s("\n%d",cinco*i);
	} while (1 < 10)
	
	return 0;
}

