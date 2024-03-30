#include <stdio.h>
#include <locale.h>

int main() 
{
	int idade;
	float renda, parcela, seguro;

	printf("Bem-vindo (a) ao DividaEterna");
	printf("Qual sua idade?");
	scanf("%d", &idade);
	printf("Qual sua renda");
	scanf("%f", &renda);

	if(renda > 1500) 
	{
	    parcela = renda * 0.15
	
	    if(renda > 2000) {
	        parcela = renda * 0.20
		}
	    
	    if(renda > 2500) {
	        parcela = renda * 0.30
		}
	    
	    printf("Sua parcela é de %.2f ", parcela);
	    
	} else {
	
		printf("Não podemos emprestar dinheiro");
	}
	
	return 0;
}
