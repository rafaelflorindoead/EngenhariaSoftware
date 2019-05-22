#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");    
    int codigo;
    float preco;
    
    printf("\n 1 - Produto do Sul");
    printf("\n 2 - Produto do Norte");
    printf("\n 3 - Produto do Leste");
    printf("\n 4 - Produto do Oeste");
    printf("\n 5 - Produto do Nordeste");
    printf("\n 6 - Produto do Nordeste");
    printf("\n Entre com o codigo: ");
    scanf ("%d",&codigo);
    printf("Entre com o preço do produto: ");
    scanf ("%f",&preco);
	
	switch(codigo){
		case 1:
			printf("\nProduto do Sul, R$ %.2f", preco);
			break;
		case 2:
			printf("\nProduto do Norte, R$ %.2f", preco);
			break;
		case 3:
			printf("\nProduto do Leste, R$ %.2f", preco);
			break;
		case 4:
			printf("\nProduto do Oeste, R$ %.2f", preco);
			break;
		case 5:
		case 6:
			printf("\n*******************************");
			printf("\nProduto do Nordeste, R$ %.2f", preco);
			printf("\n*******************************");
			break;
		default:
			printf("\nValor Inválido");
	}
	return 0;
}
