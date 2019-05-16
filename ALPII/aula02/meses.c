#include<stdio.h>
#define MES 12
int main(){
	
	int ano, meses;
	printf ("Informe a quantidade de anos: ");
	scanf("%d", &ano);
	meses = ano * MES;
	printf("Para %d anos, temos %d meses", ano, meses);
	return 0;
}
