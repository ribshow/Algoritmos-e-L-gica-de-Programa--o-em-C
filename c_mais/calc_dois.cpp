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
		
		printf("Opera��es dispon�veis\n");
		printf("1 - soma\n");
		printf("2 - subtra��o\n");
		printf("3 - multiplica��o\n");
		printf("4 - divis�o\n");
		printf("5 - resto da divis�o\n");
		printf("6 - raiz quadrada\n");
		
		printf("\nDigite a express�o na seguinte forma: op��o ENTER, n�mero 1 ENTER, n�mero 2 ENTER\n");
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
				    printf("N�o existe divis�o por 0, fim!");
				break;
			
			case 5:
                printf("%d\n\n", (int)num1 / (int)num2);
                break;
                
            case 6:
            	double n, raiz;
            	scanf("%lf", &n);
            	raiz= sqrt(n);
            	printf("Raiz quadrade de %.2f � %.2lf\n", n,raiz);
				
			default:
				if(num1 != 0 && op != '0' && num2 !=0)
				    printf("Operador inv�lido!");
				else
				    printf("Fechando calculadora!\n");
				
		}
		
		
	}while(num1 != 0 && op != '0' && num2 != 0);
}
