#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct Banda
{
	int codigo;
    char nomeBanda[45];
	char tipoMusica[10];
    int integrantes;
    int posicao;
};
struct Banda bandas[2];

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,j;
	for(i=0; i<2; i++){
		system("cls");
		printf("Informe o Nome da Banda: ");
		fflush(stdin);
		gets(bandas[i].nomeBanda);
		printf("Informe o tipo de M�sica:  ");
		fflush(stdin);
		gets(bandas[i].tipoMusica);
		printf("Informe o n�mero de Integrantes:  ");
		fflush(stdin);
		scanf("%d", &bandas[i].integrantes);
		printf("Informe a posi��o do ranking:  ");
		fflush(stdin);
		scanf("%d", &bandas[i].posicao);
	}
	printf("CODIGO\t NOME BANDA\t TIPO M�SICA\t N�MERO INTEGRANTES\t POSI��O RANKING\n");
	//int j;
	for(j = 0; j < 2; j++){
		printf("\n %d", j);
		printf("\t %s", bandas[j].nomeBanda);
		printf("\t %s", bandas[j].tipoMusica);
		printf("\t %d", bandas[j].integrantes);
		printf("\t\t\t %d", bandas[j].posicao);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
