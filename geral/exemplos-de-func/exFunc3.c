#include <stdio.h>
#include <string.h>


void soma(int a, int b)
{
	int s;
	s = a + b;
	
	printf("\n Soma = %d", s);
}

int main(){
	soma(2, 65);
	getchar();
	return 0;
}