#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define TAM 15
struct Pessoa
{
	int codigo;
	char nome[30];
	char telefone[30];
};
struct Pessoa agenda[TAM];
int k = -1;

void listar();
void cadastrar();
void buscarNome();
void alterar();
int main(){
	int opcao;
	setlocale(LC_ALL, "");	
	do{
		system("cls");
		printf("\n\t******************************\n");
		printf("\n\t1 - Inserir");
		printf("\n\t2 - Listar");
		printf("\n\t3 - Buscar Nome");
		printf("\n\t4 - Alterar");
		printf("\n\t5 - Sair");
		printf("\n\tEscolha uma opção: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				cadastrar();
				break;
			case 2:
				listar();
				getch();
				break;
			case 3:
				buscarNome();
				getch();
				break;
			case 4:
				listar();
				getch();
				alterar();
				getch();
				break;
			default:
				printf("\n\nSAINDO");
		}
	}while(opcao!=5);
	system("pause");
	return 0;
}
void cadastrar(){
	int i,j, resp;
	resp = 1;
	while (resp == 1){
		k++;
		system("cls");
		printf("Sequencial = %d", k);
		printf("\n\tInforme o Código: ");
		fflush(stdin);
		scanf("%d", &agenda[k].codigo);
		printf("\n\tInforme o nome:  ");
		fflush(stdin);
		gets(agenda[k].nome);
		printf("\n\tInforme o telefone:  ");
		fflush(stdin);
		gets(agenda[k].telefone);
		printf("\n\n\tDeseja cadastrar novo telefone? [1] Sim [2] Não?: ");
		scanf("%d", &resp);
	}
}
	
void listar(){
	int i,j;
	system("cls");
	if(k == -1) {
		printf("Lista Vazia!!!");
		getch();
	}else{
		printf("  ITEM - CODIGO - NOME - TELEFONE\n");
		for(i=0; i <= k;i++){
			printf("\n    %d   - %d  ", i, agenda[i].codigo);
			printf(" - %s", agenda[i].nome);
			printf(" - %s", agenda[i].telefone);
		}	
	}
}
void buscarNome(){
	char nomeBuscar[80];
	system("cls");
	printf("\n\tEntre com o nome a ser pesquisado: ");
	fflush(stdin);
	gets(nomeBuscar);
	int i=0;
	int achou = 0;
	while (i<k){
		if(strcmp(nomeBuscar, agenda[i].nome) == 0){
			printf("\n\tDados encontrado.");
			printf("\n\tCodigo = %d", agenda[i].codigo);
			printf("\n\tNome = %s", agenda[i].nome);
			printf("\n\tTelefone = %s", agenda[i].telefone);
			achou = 1;
		}
		i++;
	}
	if (achou == 0) printf("\n\tNome não encontrado");
}
void alterar(){
	int codigoBuscar;
	system("cls");
	printf("\n\tEntre com o código a ser alterado");
	fflush(stdin);
	scanf("%d", &codigoBuscar);
	printf("\n\tcodigo = \n\n%d", codigoBuscar);
	int i=0;
	int achou = 0;
	while (i <= k){
		if(codigoBuscar == agenda[i].codigo){
			printf("\n\tDados encontrado.");
			printf("\n\tCodigo = %d", agenda[i].codigo);
			printf("\n\tNome = %s", agenda[i].nome);
			printf("\n\tTelefone = %s", agenda[i].telefone);
			printf("\n\tDados a serem alterados");
			printf("\n\tInforme o nome:  ");
			fflush(stdin);
			gets(agenda[i].nome);
			printf("\n\tInforme o telefone:  ");
			fflush(stdin);
			gets(agenda[i].telefone);
			achou = 1;
		}
		i++;
	}
	if (achou == 0) printf("\n\tCódigo não encontrado");
}
