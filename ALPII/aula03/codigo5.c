#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");    
    int n1;
    printf("Entre com o primeiro número: ");
    scanf ("%d",&n1);
	switch(n1){
		case 1:
			printf("Valor válido = %d", n1);
			break;
		case 5:
			printf("Valor válido = %d", n1);
			break;
		case 10:
			printf("Valor válido = %d", n1);
			break;
		default:
			printf("Valor Inválido");
	}
	return 0;
}
