#include<stdio.h>

int main(){
	int i, posic[10];
	
	for(i= 0; i < 4; i++){
		printf("Entre com o valor [%d]", i + 1);
		scanf("%d", &posic[i]);
	}
	for(i= 0; i < 4; i++){
		if (posic[i] >= 0){
			printf("\nPosi��o [%d] = %d positivo", i+1, posic[i]);
		}else{
			printf("\nPosi��o [%d] = %d negativo", i+1, posic[i]);
		}
	}
	return 0;
}
