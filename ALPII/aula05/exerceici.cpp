#include<stdio.h>
int main(){
	int vet1[3];
	int vet2[3];
	int vet3[3];
	int i;
	printf("\n  ***** VETOR 1  ******\n");
	for(i=0; i < 3; i++){
		printf("Entre com o valor [%d] = ", i+1);
		scanf("%d", &vet1[i]);
	}
	printf("\n  ***** VETOR 1  ******\n");
	for(i=0; i < 3; i++){
		printf("Entre com o valor [%d] = ", i+1);
		scanf("%d", &vet2[i]);
	}
	printf("\n  ***** VETOR 1 + VETOR 2 ******\n");
	for(i=0; i < 3; i++){
		vet3[i] = vet1[i] + vet2[i];
	}
	printf("\n  ***** VETOR 3 ******\n");
	for(i=0; i < 3; i++){
		printf("\n[%d] = %d", i+1, vet1[i]);
		printf(" + [%d] = %d", i+1, vet2[i]);
		printf(" = [%d] = %d", i+1, vet3[i]);
	}
	return 0;
}
