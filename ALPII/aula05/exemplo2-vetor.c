#include<stdio.h>
int main(){
	float notas[3][2];
	int i, j;
	for (i=0; i < 3; i++){
		for (j=0; j < 2; j++){
			printf("Entre com a nota %d do aluno %d: ", i+1, j+1);
			scanf("%f", &notas[i][j]);
		}	
	}
	for (i=0; i < 3; i++){
		for (j=0; j < 2; j++){
			printf("\n[%d][%d] = %f",i+1, j+1, notas[i][j]);		
		}	
	}	
	return 0;
}
