#include<stdio.h>
int votacao(int idade){
	if ((idade >= 18) && (idade < 70)){
		return 1;
	}else{
		return 0;
	}
}
int main()
{
	int retorno = votacao(70);
	if (retorno)
		printf("Voto Obrigatório");
	else
		printf("Voto facultativo");
	return 0;
}


