int main(){
	int n1, n2, x;
	
	printf("Informe dois valores");
	scanf("%d%d", &n1,&n2);
	
	x = n1 + n2;
	
	if (x >= 10){
		printf("Valor para x = %d , resulta em %d = ", x, x + 5);
	}else{
		printf("Valor para x = %d , resulta em %d = ", x,  x - 7);
	}
	return 0;
}
