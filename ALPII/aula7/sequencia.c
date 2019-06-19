#include<stdio.h>

int main(){
	int i;
	for(i=1; i <= 99; i = i + 2)	
		if (i < 99)
			printf("%d - ", i);
		else
			printf("%d", i);
	return 0;
}


/*
#include<stdio.h>

int main(){
	
	return 0;
}
*/
