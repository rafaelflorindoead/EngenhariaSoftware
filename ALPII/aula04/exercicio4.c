#include<stdio.h>

int main(){
	int codigo;
	float preco, novoPreco, desconto, valorParcela;
	
	printf("Entre com o código ");
	scanf("%d", &codigo);
	printf("Entre com o preço do produto ");
	scanf("%f", &preco);
	if (codigo == 1){
		desconto = (preco * 10)/100;
		novoPreco = preco - desconto;
		printf("Novo Preço R$ %.2f ", novoPreco);
	}else if(codigo == 2){
		desconto = (preco * 5)/100;
		novoPreco = preco - desconto;
		printf("Novo Preço R$ %.2f ", novoPreco);
	}else if(codigo == 3){
		valorParcela = preco / 2;
		printf("Valor Parcela 2 x R$ %.2f ", valorParcela);
	}
	else if(codigo == 4){
		desconto = (preco * 10)/100;
		novoPreco = preco + desconto;
		valorParcela = novoPreco / 3;
		printf("Novo Preço R$ %.2f ", novoPreco);
		printf("Valor Parcela 3 x R$ %.2f ", valorParcela);
	}else{
		printf("Código inválido!!!");
	}
	return 0;
}
