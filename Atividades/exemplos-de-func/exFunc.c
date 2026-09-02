#include <stdio.h>
#include <string.h>

int a, b, s;

void soma()
{
	printf("\n Digite o primeiro numero");
	scanf("%d%*c", &a);
	
	printf("\n Digite o segundo numero");
	scanf("%d%*c", &b);
	
	s = a + b;
	
	printf("\n Soma = %d", s);
}

int main(){
	soma();
	getchar();
	return 0;
}