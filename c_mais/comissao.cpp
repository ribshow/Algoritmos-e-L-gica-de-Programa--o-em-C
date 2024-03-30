#include <stdio.h>
#include <locale.h>

int main() 
{
	/* Calcule a comiss�o de um vendedor de frios de acordo 
	   com a tabela abaixo:

	Mussarela: Pre�o por quilo: R$ 56,20     | Comiss�o: 3%
	Presunto : Pre�o por quilo: R$ 78,20     | Comiss�o: 5%
	Peito de Peru: Pre�o por quilo: R$ 89,60 | Comiss�o: 10%
	Mortadela: Pre�o por quilo: R$ 25,90     | Comiss�o: 8%
	
	Fa�a um algoritmo que leia a quantidade vendida e:
	a) Apresente o total vendido por produto
	b) Apresente o valor da comiss�o de cada produto
	c) Apresente o total das vendas
	d) Apresente o total da comiss�o
	*/
	
	// Resolver problema dos acentos.
	setlocale(LC_ALL, "");
	
	float qnt_mussarela, qnt_presunto, qnt_peito_peru, qnt_mortadela;
	float total_mussarela, total_presunto, total_peito_peru, total_mortadela;
	float comissao_mussarela, comissao_presunto, comissao_peito_peru, comissao_mortadela;
	float total_vendas, total_comissao;
	 
	printf("Quanto foi vendido de Mussarela? kg");
	scanf("%f", &qnt_mussarela);
	total_mussarela = qnt_mussarela * 56.2;
	comissao_mussarela = total_mussarela * 0.03;
	
	printf("Quanto foi vendido de Presunto? kg");
	scanf("%f", &qnt_presunto);
	total_presunto = qnt_presunto * 78.2;
	comissao_presunto = total_presunto * 0.05;
	
	printf("Quanto foi vendido de Peito de Peru? kg");
	scanf("%f", &qnt_peito_peru);
	total_peito_peru = qnt_peito_peru * 89.6;
	comissao_peito_peru = total_peito_peru * 0.1;
	
	printf("Quanto foi vendido de Mortadela? kg");
	scanf("%f", &qnt_mortadela);
	total_mortadela = qnt_mortadela * 25.9;
	comissao_mortadela = total_mortadela * 0.08;

	total_vendas = total_mussarela + total_presunto + total_peito_peru + total_mortadela;
	total_comissao = comissao_mussarela + comissao_presunto + comissao_peito_peru + comissao_mortadela;
	
	printf("Total de Vendas Mussarela R$ %.2f \n", total_mussarela);
	printf("Total de Vendas Presunto R$ %.2f \n", total_presunto);
	printf("Total de Vendas Peito Peru R$ %.2f \n", total_peito_peru);
	printf("Total de Vendas Mortadela R$ %.2f \n", total_mortadela);
	printf("Total de Vendas R$ %.2f \n", total_vendas);
	
	printf("Comiss�o Mussarela R$ %.2f \n", comissao_mussarela);
	printf("Comiss�o Presunto R$ %.2f \n", comissao_presunto);
	printf("Comiss�o Peito Peru R$ %.2f \n", comissao_peito_peru);
	printf("Comiss�o Mortadela R$ %.2f \n", comissao_mortadela);
	printf("Total Comiss�o R$ %.2f \n", total_comissao);
    
	return 0;
}
