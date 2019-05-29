#include<stdio.h>
int main(){
	int idade;
	printf("Informe a Idade: ");
	scanf("%d", &idade);
	do{
		if(idade > 18){
			printf("\nPode jogar");
		}else{
			printf("\nNão poderá jogar");
		}
		printf("\nInforme a Idade: ");
		scanf("%d", &idade);
	}while(idade!=0);
		return 0;
}
