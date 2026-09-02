#include <stdio.h>
#include <string.h>


int soma(int a, int b);


int main(){
	int a, b, s;
	
	printf("\n Digite o primeiro numero");
	scanf("%d%*c", &a);
	
	printf("\n Digite o segundo numero");
	scanf("%d%*c", &b);
	
	s = soma(a, b);
	
	printf("\n Soma = %d", s);
			
	getchar();

	return 0;
}

int soma(int a, int b){
	return a + b;
}