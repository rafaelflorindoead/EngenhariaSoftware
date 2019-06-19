#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, delta;
	float xi, xii;
	
	printf("Entre com  valor A, B, C\n");
	scanf("%d %d %d", &a, &b, &c);
	delta = pow(b,2) - (4*a*c);
	printf("Delta = %d", delta);
	
	if(delta > 0){
		printf("\nA equação possui duas raizes reais distintas");
		xi = ((-1)*b + sqrt(delta)) / (2*a);
		xii = ((-1)*b - sqrt(delta)) / (2*a);
		printf ("\nXi = %f", xi);
		printf ("\nXii = %f", xii);
	}else if(delta == 0){
		printf("\nA equação possui duas raizes reais iguais");
		xi = ((-1)*b + sqrt(delta)) / (2*a);
		printf ("\nXi = %f", xi);
	}else if(delta < 0){
		printf("\nA equação não possui raizes reais");
	}else{
		printf("Erro!!!");
	}
	return 0;
}

