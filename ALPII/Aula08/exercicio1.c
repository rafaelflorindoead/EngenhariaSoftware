#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct Pessoa
{
	int codigo;
    char nome[45];
	char sobrenome[10];
    char dataNascimento[10];
    char dataAdmissao[10];
    char rg[10];
    float salario;
};
struct Pessoa funcionario[2];

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,j, op;
	do{	
		system("cls");
		printf("\n\t1 - Incluir");
		printf("\n\t2 - listar");
		printf("\n\t3 - Sair");
		printf("\nEscolha uma opção: ");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				for(i=0; i<2; i++){
					system("cls");
					printf("Informe o Código: ");
					fflush(stdin);
					scanf("%d", &funcionario[i].codigo);
					printf("Informe o nome:  ");
					fflush(stdin);
					gets(funcionario[i].nome);
					printf("Informe o sobrenome:  ");
					fflush(stdin);
					gets(funcionario[i].sobrenome);
					printf("Informe a data de Nascimento:  ");
					fflush(stdin);
					gets(funcionario[i].dataNascimento);
					printf("Informe a data de Admissão:  ");
					fflush(stdin);
					gets(funcionario[i].dataAdmissao);
					printf("Informe a data de o RG");
					gets(funcionario[i].rg);
					printf("Informe o Salário");
					scanf("%f", &funcionario[i].salario);
				}		
				break;
			case 2:
				printf("  ITEM - CODIGO - NOME - SOBRENOME - DATA NASCIMENTO - DATA ADMISSÃO - RG - SALÁRIO (R$)\n");
				for(j=0;j<2;j++){
					printf("\n    %d   - %d  ", j, funcionario[j].codigo);
					printf(" - %s", funcionario[j].nome);
					printf(" - %s", funcionario[j].sobrenome);
					printf("   - %s", funcionario[j].dataNascimento);
					printf("   - %s", funcionario[j].dataAdmissao);
					printf("   - %s", funcionario[j].rg);
					printf("   - %f", funcionario[j].salario);
				}
				system("pause");
				break;
			default:
				printf("Saindo do sistema!!!");
		}
	}while(op != 3);
		//int j;
		
	printf("\n\n");
	system("pause");
	return 0;
}
