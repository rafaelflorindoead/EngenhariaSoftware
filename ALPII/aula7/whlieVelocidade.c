#include<stdio.h>
int main(){
	float nota[80];
	int k;
	float soma = 0;
	k=0;
	while(k<3){
		scanf("%f", &nota[k]);
		soma = soma + nota[k];
		k++;
	}
	float media = soma/3;
	k=0;
	while(k<3){
		printf("Nota = %f", nota[k]);
		k++;
	}
	/*for(k=0; k<3; k++){
		scanf("%f", &nota[k]);
		soma = soma + nota[k];
	}*/
	/*for(k=0; k<3; k++){
		printf("Nota = %f", nota[k]);
	}*/
	printf("Media = %f", media);
}
