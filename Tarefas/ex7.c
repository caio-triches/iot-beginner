#include <stdio.h>
#include <stdlib.h>
int main()
{
	int numero;
	
	printf("Digite um numero qualquer \n");
	
	scanf("%d", &numero);
	
	if(numero < 0)
		printf("Numero menor que zero");
	
	else if(numero < 10)
		printf("Numero >= 0 e < 9");
		
	else if(numero < 100)
		printf("Numero >= 10 e < 100");
		
	else
		printf("Numero >= 100");	
}