#include <stdio.h>

int main(){
	float media, nota1, nota2;
	
	printf("Informe duas notas: ");
	scanf("%f%f", &nota1,&nota2);
	media = (nota1 + nota2)/2;
	
	if (media>=70){
		printf("Aprovado com media = %.2f", media);
	}
	return 0;
}
