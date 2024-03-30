#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	char enunciado[255];
	char a[100], b[100], c[100], d[100];
	int correta;
} Pergunta;

int aleatorio();

int main()
{
	time_t t; 
    
    /* Inicializa o gerador */
	srand((unsigned) time(&t));	
	
    int sorteado = aleatorio();

	printf("Numero sorteado foi: %d \n", sorteado);
	
	Pergunta perguntas_faceis[5];
	
	/* Pergunta 1 */
	strcpy(perguntas_faceis[0].enunciado, "Do que é feito o colar de pérolas?");
	strcpy(perguntas_faceis[0].a, "1 - Limões");
	strcpy(perguntas_faceis[0].b, "2 - Pérolas");
	strcpy(perguntas_faceis[0].c, "3 - Rubis");
	strcpy(perguntas_faceis[0].d, "4 - Gaytorade");
	perguntas_faceis[0].correta = 2;
	
	/* Pergunta 2 */
	strcpy(perguntas_faceis[1].enunciado, "Teste pergunta 2");
	strcpy(perguntas_faceis[1].a, "Alternativa a 2");
	strcpy(perguntas_faceis[1].b, "Alternativa b 2");
	strcpy(perguntas_faceis[1].c, "Alternativa c 2");
	strcpy(perguntas_faceis[1].d, "Alternativa d 2");
	perguntas_faceis[1].correta = 4; 
	
	/* Pergunta 3 */
	strcpy(perguntas_faceis[2].enunciado, "Teste pergunta 3");
	strcpy(perguntas_faceis[2].a, "Alternativa a 3");
	strcpy(perguntas_faceis[2].b, "Alternativa b 3");
	strcpy(perguntas_faceis[2].c, "Alternativa c 3");
	strcpy(perguntas_faceis[2].d, "Alternativa d 3");
	perguntas_faceis[2].correta = 4;   
	
	/* Pergunta 4 */
	strcpy(perguntas_faceis[3].enunciado, "Teste pergunta 4");
	strcpy(perguntas_faceis[3].a, "Alternativa a 4");
	strcpy(perguntas_faceis[3].b, "Alternativa b 4");
	strcpy(perguntas_faceis[3].c, "Alternativa c 4");
	strcpy(perguntas_faceis[3].d, "Alternativa d 4");
	perguntas_faceis[3].correta = 4;
	
	/* Pergunta 5*/
	strcpy(perguntas_faceis[4].enunciado, "Teste pergunta 5");
	strcpy(perguntas_faceis[4].a, "Alternativa a 5");
	strcpy(perguntas_faceis[4].b, "Alternativa b 5");
	strcpy(perguntas_faceis[4].c, "Alternativa c 5");
	strcpy(perguntas_faceis[4].d, "Alternativa d 5");
	perguntas_faceis[4].correta = 4;
    
	
	
	/* Na posição do vetor, colocamos o numero q foi sorteado */
	printf("%s \n", perguntas_faceis[sorteado].enunciado);
	printf("%s \n", perguntas_faceis[sorteado].a);
	printf("%s \n", perguntas_faceis[sorteado].b);
	printf("%s \n", perguntas_faceis[sorteado].c);
	printf("%s \n", perguntas_faceis[sorteado].d);
	
}

int aleatorio()
{
    /* Intervalo de geração de 0 à 5 */
	return rand() % 5;		
}



