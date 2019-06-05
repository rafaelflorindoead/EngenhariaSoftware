#include<stdio.h>
int main(){
	float notas[3][2];
	
	printf("Entre com a nota 1 do aluno 1: ");
	scanf("%f", &notas[0][0]);
	printf("Entre com a nota 2 do aluno 1: ");
	scanf("%f", &notas[0][1]);
	printf("Entre com a nota 1 do aluno 2: ");
	scanf("%f", &notas[1][0]);
	printf("Entre com a nota 2 do aluno 2: ");
	scanf("%f", &notas[1][1]);
	printf("Entre com a nota 1 do aluno 3: ");
	scanf("%f", &notas[2][0]);
	printf("Entre com a nota 2 do aluno 3: ");
	scanf("%f", &notas[2][1]);
	
	printf("\n[0][0] = %f", notas[0][0]);
	printf("\n[0][1] = %f", notas[0][1]);
	printf("\n[1][0] = %f", notas[1][0]);
	printf("\n[1][1] = %f", notas[1][1]);
	printf("\n[2][0] = %f", notas[2][0]);
	printf("\n[2][1] = %f", notas[2][1]);
	return 0;
}
