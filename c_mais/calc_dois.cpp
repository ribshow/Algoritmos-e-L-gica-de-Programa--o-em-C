#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
	setlocale(LC_ALL,"");
	
	float num1, num2,result;
	int op, n,raiz;
	char opera;
		
	do
	{
		printf("\t\tCalculadora do curso de C Progressivo\n\n");
		
		printf("Operações disponíveis\n");
		printf("1 - soma\n");
		printf("2 - subtração\n");
		printf("3 - multiplicação\n");
		printf("4 - divisão\n");
		printf("5 - resto da divisão\n");
		printf("6 - raiz quadrada\n");
		
		printf("\nDigite a expressão na seguinte forma: opção ENTER, número 1 ENTER, número 2 ENTER\n");
		printf("Exemplos: 1 ENTER,25 ENTER,35 ENTER\n");
		printf("Para sair digite: 0 0 0\n");
	    
	    scanf("%d", &op);
		scanf("%f", &num1);
		scanf("%f", &num2);
				
		switch(op)
		{
			case 1:
				printf("Calculando: %.2f + %.2f = ", num1,num2);
				printf("%.2f\n\n",num1+num2);
				break;
				
			case 2:
				printf("Calculando: %.2f - %.2f = ", num1,num2);
				printf("%.2f\n\n",num1-num2);
				break;
				
			case 3:
				printf("Calculando: %.2f * %.2f = ", num1,num2);
				printf("%.2f\n\n",num1*num2);
				break;
				
			case 4:
				printf("Calculando: %.2f / %.2f = ", num1,num2);
				if(num2 != 0)
				    printf("%.2f\n\n",num1/num2);
				else
				    printf("Não existe divisão por 0, fim!");
				break;
			
			case 5:
                printf("%d\n\n", (int)num1 / (int)num2);
                break;
                
            case 6:
            	double n, raiz;
            	scanf("%lf", &n);
            	raiz= sqrt(n);
            	printf("Raiz quadrade de %.2f é %.2lf\n", n,raiz);
				
			default:
				if(num1 != 0 && op != '0' && num2 !=0)
				    printf("Operador inválido!");
				else
				    printf("Fechando calculadora!\n");
				
		}
		
		
	}while(num1 != 0 && op != '0' && num2 != 0);
}
