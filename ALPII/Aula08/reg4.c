#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
typedef float nota;
struct Pessoa
{
	int codigo;
	char nome[30];
	nota debito[12];
};
struct Pessoa cadPessoa[10];
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,j;
	for(i=0;i<3;i++){
		system("cls");
		printf("Informe o C�digo: ");
		fflush(stdin);
		scanf("%d", &cadPessoa[i].codigo);
		printf("Informe o nome:  ");
		fflush(stdin);
		gets(cadPessoa[i].nome);
		for(j=0;j<2;j++){
			printf("Informe os d�bitos: ");
			fflush(stdin);
			scanf("%f", &cadPessoa[i].debito[j]);
		}
	}
	printf("  ITEM - CODIGO - NOME - D�BITOS (R$)\n");
	for(i=0;i<3;i++){
		printf("\n    %d   - %d  ", i, cadPessoa[i].codigo);
		printf(" - %s", cadPessoa[i].nome);
		for(j=0;j<2;j++){
			printf("  - %5.2f",cadPessoa[i].debito[j]);	
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}
