#include <stdio.h> // Biblioteca de entrada e sa�da
#include <locale.h> 

int main() //fun��o principal 
{
	//Resolver problema dos acentos.
	setlocale(LC_ALL,"");
	
	// V�riaveis de n�mero real.
	float peso, altura, imc;
	
	printf("Informe a altura: ");
	scanf("%f", &altura); // leia
	printf("Informe o peso: ");
	scanf("%f", &peso); // leia
	imc = peso / (altura*altura);
	printf("Seu IMC � %f \n", imc);
	
	if(imc < 17)
	{
		printf("Muito abaixo do peso. \n ");
		
	}else if(imc >=17 && imc <= 18.49)
	{
		printf("Abaixo do peso.\n ");
		
	} else if(imc >=18.5 && imc <= 24.99)
	{
		printf("Peso normal \n");
		
	 } else if(imc >= 25 && imc <= 29.99)
	 {
	 	printf("Acima do peso \n");
	 } else if(imc >= 30 && imc <= 34.99)
	 {
	 	printf("Obesidade n�vel 1 \n");
	 } else if(imc >=35 && imc <= 39.99)
	 {
	 	printf("Obesidade n�vel 2 \n");
	 } else
	 {
	 	printf("Obesidade n�vel 3");
	 }
		
	return 0;
}

