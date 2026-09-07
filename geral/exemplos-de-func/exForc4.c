#include <stdio.h>
#include <string.h>


int soma()
{
	int a, b, s;
	
	printf("\n Digite o primeiro numero");
	scanf("%d%*c", &a);
	
	printf("\n Digite o segundo numero");
	scanf("%d%*c", &b);
	
	s = a + b;
	
	return s;
}

int main(){
	int s;
	
	s = soma();
	
	printf("\n Soma = %d", s);
			
	getchar();

	return 0;
}