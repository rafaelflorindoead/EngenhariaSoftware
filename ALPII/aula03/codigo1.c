#include<stdio.h>
int main(){
	int n;
	printf("Entre com o valor: ");
	scanf("%d", &n);
	if(n == 1){
		printf("Codigo valido, numero um");
	}
	if(n == 2){
		printf("Codigo valido, numero dois");
	}
	if(n == 3){
		printf("Codigo valido, numero tres");
	}
	if ((n < 1) || (n > 3)){
		printf("Codigo invalido!");
	}
	return 0;
}
