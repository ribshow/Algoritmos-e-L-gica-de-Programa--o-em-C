#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() 
{
	// Resolver problema dos acentos.
	setlocale(LC_ALL, "");	
	
	// Nome com at� 30 caracteres    
    char nome[30];
    
    fflush(stdin); // Fun��o para "limpar" a entrada
    printf("Digite seu nome: ");
    scanf("%[^\n]", &nome); // Leia      
    
    printf("O nome � %s \n", nome);
    
	return 0;
}
