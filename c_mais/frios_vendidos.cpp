#include <stdio.h>
#include <locale.h>

int main()
{
	//RESOLVER PROBLEMA DOS ACENTOS .
	setlocale(LC_ALL,"");
	
	//vari�veis de n�mero real.
	float qtd_muss, qtd_pres, qtd_peit, qtd_mort;
	float tot_muss, tot_pres, tot_peit, tot_mort;
	float comissao_muss, comissao_pres, comissao_peit, comissao_mort;
	float tot_venda, tot_comissao;
	
	printf("Informe o kg de Mu�arela: ");
	scanf("%f", &qtd_muss);
	tot_muss = qtd_muss*56,2;
	comissao_muss = tot_muss*0.03;
	printf("Total vendido R$%.2f\n" ,tot_muss);
	printf("Comiss�o R$%.2f",comissao_muss);
	printf("\n\n");
	
	printf("Informe o kg de Presunto: ");
	scanf("%f", &qtd_pres);
	tot_pres = qtd_pres*76,2;
	comissao_pres = tot_pres*0.08;
	printf("Total vendido R$%2.f\n" ,tot_pres);
	printf("Comiss�o R$%.2f",comissao_pres);
	printf("\n\n");
	
	printf("Informe o kg de Peito de Peru: ");
	scanf("%f", &qtd_peit);
	tot_peit = qtd_peit*86,2;
	comissao_peit = tot_peit*0.1;
	printf("Total vendido R$%2.f\n",tot_peit);
	printf("Comiss�o R$%.2f",comissao_peit);
	printf("\n\n");
	
	printf("Informe o kg de Mortadela: ");
	scanf("%f", &qtd_mort);
	tot_mort = qtd_mort*39,9;
	comissao_mort = tot_mort*0.06;
	printf("Total vendido R$%2.f\n",tot_mort);
	printf("Comiss�o R$%.2f",comissao_mort);
	printf("\n\n");
	
	tot_venda = tot_muss+tot_pres+tot_peit+tot_mort;
	tot_comissao = comissao_muss+comissao_pres+comissao_peit+comissao_mort;
	
	printf("Total vendidos: \n");
	printf("Total Mu�arela: %.2f \n",tot_muss);
	printf("Total Presunto: %.2f\n",tot_pres);
	printf("Total Peito de Peru: %.2f\n",tot_peit);
	printf("Total Mortadela: %.2f\n",tot_mort);
	printf("Total vendido R$%.2f\n",tot_venda);
	printf("\n\n");
	
	printf("Total comiss�o: \n");
	printf("Comiss�o Mu�arela: R$%.2f\n",comissao_muss);
	printf("Comiss�o Presunto: R$%.2f\n",comissao_pres);
	printf("Comiss�o Peito de Peru: R$%.2f\n",comissao_peit);
	printf("Comiss�o Mortadela: R$%.2f\n",comissao_mort);
	printf("Total comiss�o: R$%.2f\n",tot_comissao);
	printf("\n\n");
	
	return 0;
	
	
	
}
