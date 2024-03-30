#include <stdio.h>
#include <locale.h>

int main() 
{
	// Resolver problema dos acentos.
	setlocale(LC_ALL, "");	
	
	// Variáveis de número real.   
    float peso, altura, imc;
    
    printf("Informe a altura: ");
    scanf("%f", &altura); // Leia
    printf("Informe o peso: ");
    scanf("%f", &peso); // Leia
    imc = peso / (altura * altura);
    printf("Seu IMC é %.2f \n", imc);   
    
	return 0;
}
