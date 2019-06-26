#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
struct Pessoa
{
	int codigo;
	char nome[30];
};
struct Pessoa cadPessoa[10];
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	for(i=0;i<3;i++){
		system("cls");
		printf("Informe o Código: ");
		fflush(stdin);
		scanf("%d", &cadPessoa[i].codigo);
		printf("Informe o nome:  ");
		fflush(stdin);
		gets(cadPessoa[i].nome);
	}
	printf("  ITEM - CODIGO - NOME\n");
	for(i=0;i<3;i++){
		printf("\n    %d   - %d  ", i, cadPessoa[i].codigo);
		printf(" - %s", cadPessoa[i].nome);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
