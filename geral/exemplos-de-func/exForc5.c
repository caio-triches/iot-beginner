#include <stdio.h>
#include <string.h>


int soma(int a, int b)
{
	return a + b;
}

int main(){
	int s;
	
	s = soma(1, 2);
	
	printf("\n Soma = %d", s);
			
	getchar();

	return 0;
}