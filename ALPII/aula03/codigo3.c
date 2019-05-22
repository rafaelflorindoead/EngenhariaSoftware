#include<stdio.h>
int main(){
	int v1, v2, aux;
	/*printf("Entre com o numero 1: ");
	scanf("%d", &v1);
	printf("Entre com o numero 2: ");
	scanf("%d", &v2);*/
	printf("Entre com o numero 1 e o numero 2: ");
	scanf("%d%d", &v1,&v2);
	if (v1 < v2){
		printf("Não foi necessario ordena-los.\n");
		printf("Valor 1 = %d.\n", v1);
		printf("Valor 2 = %d.\n", v2);
	}else{
		aux = v1;
		v1 = v2;
		v2 = aux;
		printf("Foi necessario ordena-los.\n");
		printf("Valor 1 = %d.\n", v1);
		printf("Valor 2 = %d.\n", v2);
	}
	return 0;
}
