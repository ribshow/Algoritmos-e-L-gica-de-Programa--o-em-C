#include <stdio.h>
#include <locale.h>

int main() 
{
	// Resolver problema dos acentos.
	setlocale(LC_ALL, "");	
	
	// Vari�veis de n�mero real.   
    float n1, n2, media;
    
    printf("Informe a Nota 1: ");
    scanf("%f", &n1); // Leia
    printf("Informe a Nota 2: ");
    scanf("%f", &n2); // Leia
    media = (n1 + n2) / 2;
    printf("Sua m�dia foi %f \n", media);    
    
	return 0;
}
