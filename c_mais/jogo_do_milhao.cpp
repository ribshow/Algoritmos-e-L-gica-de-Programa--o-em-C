#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <cstdlib>

typedef struct
{
	char ask[100];
	int answer;
}jogo;

int main ()
{
	
	setlocale(LC_ALL,"");
	
	jogo perg[15];
	jogo resp[15];
	
	int resposta;
	
	
	// Cadastrando as perguntas do jogo //
	strcpy(perg[0].ask,"Em qual estado brasileiro nasceu a apresentadora Xuxa?\n");
	strcpy(perg[1].ask,"Qual � o nome dado a estado da �gua em forma de gelo?\n");
	strcpy(perg[2].ask,"Qual era o apelido da cantora Elis Regina?\n");
	strcpy(perg[3].ask,"Quem � a namorada do Mickey?\n");
	strcpy(perg[4].ask,"Qual personagem do folclore tem uma perna s�?\n");
	strcpy(perg[5].ask,"Fidel Castro nasceu em que pa�s?\n");
	strcpy(perg[6].ask,"Quem proclamou a Rep�blica no Brasil em 1889?\n");
	strcpy(perg[7].ask,"Quem � o patrono do Ex�rcito Brasileiro?\n");
	strcpy(perg[8].ask,"Quem era o apresentador que reprovava os calouros com uma buzina?\n");
	strcpy(perg[9].ask,"O que era Frankstein, de Mary Shellei?\n");
	strcpy(perg[10].ask,"Qual � o signo do zod�aco de quem nasce no dia do ano novo?\n");
	strcpy(perg[11].ask,"Quem fundou a f�brica de autom�veis Ford?\n");
	strcpy(perg[12].ask,"Qual a cor que se associa com os grupos ecol�gicos?\n");
	strcpy(perg[13].ask,"A �gua ferve a quantos graus cent�grados?\n");
	strcpy(perg[14].ask,"Quando � comemorado o dia da independ�ncia no Brasil?\n");
	
	// Cadastrando respostas //
	resp[0].answer = 2;
	resp[1].answer = 2;
	resp[2].answer = 3;
	resp[3].answer = 2;
	resp[4].answer = 4;
	resp[5].answer = 2;
	resp[6].answer = 4;
	resp[7].answer = 3;
	resp[8].answer = 4;
	resp[9].answer = 1;
	resp[10].answer= 3;
	resp[11].answer= 3;
	resp[12].answer= 4;
	resp[13].answer= 2;
	resp[14].answer= 3;
	
	printf("Bem vindo ao SHOW do MILH�O!\n");
	printf("Pronto para iniciar sua aventura? Vamos l�!!!\n\n");
	printf("1� Pergunta:\n");
	printf("%s", perg[0].ask);
	printf("1-Rio de Janeiro | 2-Rio Grande do Sul | 3-Santa Catarina | 4-Goi�s\n");
	scanf("%d", &resposta);
	if (resposta == resp[0].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 1000 REAIS!\n");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
		
	printf("Pr�xima pergunta:\n\n");
	printf("2� Pergunta:\n");
	printf("%s", perg[1].ask);
	printf("1-L�quido | 2-S�lido | 3-Gasoso | 4-Vaporoso\n");
	scanf("%d", &resposta);
	if (resposta == resp[1].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 2000 REAIS!\n");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("Pr�xima pergunta:\n\n");
	printf("3� Pergunta:\n");
	printf("%s", perg[2].ask);
	printf("1-Gauchinha | 2-Paulistinha | 3-Pimentinha | 4-Andorinha\n");
	scanf("%d", &resposta);
	if (resposta == resp[2].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 2000 REAIS!\n");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("Pr�xima pergunta:\n\n");
	printf("4� Pergunta:\n");
	printf("%s", perg[3].ask);
	printf("1-Margarida | 2-Minnie | 3-A pequena sereia | 4-Ol�via Palito\n");
	scanf("%d", &resposta);
	if (resposta == resp[3].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 5000 REAIS!\n");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("Pr�xima pergunta:\n\n");
	printf("5� Pergunta:\n");
	printf("%s", perg[4].ask);
	printf("1-Cuca | 2-Negrinho do Pastoreiro | 3-Boitat� | 4-Saci-Perer�\n");
	scanf("%d", &resposta);
	if (resposta == resp[4].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 10000 REAIS!\n");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("Pr�xima pergunta:\n\n");
	printf("6� Pergunta: \n");
	printf("%s", perg[5].ask);
	printf("1-Jamaica | 2-Cuba | 3-El Salvador | 4-M�xico\n");
	scanf("%d", &resposta);
	if (resposta == resp[5].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 20000 REAIS!\n");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("Pr�xima pergunta:\n\n");
	printf("7� Pergunta: \n");
	printf("%s", perg[6].ask);
	printf("1-Duque de caxias | 2-Marechal Rondon | 3-Dom Pedro II | 4-Marechal Deodoro\n");
	scanf("%d", &resposta);
	if (resposta == resp[6].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 50000 REAIS!\n");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("Pr�xima pergunta:\n\n");
	printf("8� Pergunta: \n");
	printf("%s", perg[7].ask);
	printf("1-Marechal Deodoro | 2-Bar�o de Mau� | 3-Duque de Caxias | 4-Marqu�s de Pombal\n");
	scanf("%d", &resposta);
	if (resposta == resp[7].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 100000 REAIS!\n");
	}else 
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("Pr�xima pergunta:\n\n");
	printf("9� Pergunta: \n");
	printf("%s", perg[8].ask);
	printf("1-Raul Gil | 2-Bolinha | 3-Fl�vio Cavalcanti | 4-Chacrinha\n");
	scanf("%d", &resposta);
	if (resposta == resp[8].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 200000\n");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("Pr�xima pergunta:\n\n");
	printf("10� Pergunta: \n");
	printf("%s", perg[9].ask);
	printf("1-Monstro | 2-Gorila | 3-Pr�ncipe | 4-Sapo\n");
	scanf("%d", &resposta);
	if (resposta == resp[9].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 300000\n");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("Pr�xima pergunta:\n\n");
	printf("11� Pergunta: \n");
	printf("%s", perg[10].ask);
	printf("1-Virgem | 2-Aqu�rio | 3-Capric�rnio | 4-�ries\n");
	scanf("%d", &resposta);
	if (resposta == resp[10].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 400000\n");
	}else 
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("Pr�xima pergunta:\n\n");
	printf("12� Pergunta: \n");
	printf("%s", perg[11].ask);
	printf("1-Harrison Ford | 2-Gerald Ford | 3-Henry Ford | 4-Anna Ford\n");
	scanf("%d", &resposta);
	if (resposta == resp[11].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 500000!\n");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("Pr�xima pergunta:\n\n");
	printf("13� Pergunta: \n");
	printf("%s", perg[12].ask);
	printf("1-Preta | 2-Vermelha | 3-Azul | 4-Verde\n");
	scanf("%d", &resposta);
	if (resposta == resp[12].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 600000!\n");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("Pr�xima pergunta:\n\n");
	printf("14� Pergunta: \n");
	printf("%s", perg[13].ask);
	printf("1-200 | 2-100 | 3-170 | 4-220\n");
	scanf("%d", &resposta);
	if (resposta == resp[13].answer)
	{
		printf("RESPOSTA CORRETA, VOC� GANHOU 800000!\n\n");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
	printf("VOC� CHEGOU AO T�O ESPERADO MOMENTO, A PERGUNTA DO MILH�O!\n");
	printf("Are you ready?\n");
	printf("PERGUNTA DO MILH�O:\n");
	printf("%s", perg[14].ask);
	printf("1-21 de abril | 2-12 de outubro | 3-7 de setembro | 4-25 de dezembro\n");
	scanf("%d", &resposta);
	if (resposta == resp[14].answer)
	{
		printf("PARAB�NS VOC� GANHOU 1 MILH�O DE REAIS!!!");
	}else
	{
		printf("RESPOSTA ERRADA, PERDEU TUDO!");
		return 0;
	}
	
    return 0;
	
}

