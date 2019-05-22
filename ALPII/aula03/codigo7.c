#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");
    int codigo;

    printf("\n1 - Alimento não perecível");
    printf("\n2, 3, 4 - Alimento perecível");
    printf("\n5, 6 - Vestuário");
    printf("\n7 - Higiene Pessoal");
	printf("\nEntre com o código");
	scanf("%d", &codigo);
	
	switch(codigo){
	
		case 1:
		    printf ("Alimento não perecível");
		    break;
		case 2:
		case 3:
		case 4:
			printf("Alimento perecível");
			break;
		case 5:
		case 6:
			printf("Vestuário");
			break;
		case 7:
			printf("Higiene Pessoal");
			break;
		default:
			printf("Inválido");
	}
}
