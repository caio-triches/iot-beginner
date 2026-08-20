#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n1, n2;
	
	printf("Digite dois numero: \n");
	scanf("%d %d",&n1,&n2);

	if(n1 > n2){
		printf("\nOs dois numero ordenados: %d %d", n2, n1);
	}else if(n1 < n2){
		printf("\nOs dois numero ordenados: %d %d", n1, n2);
	}else if(n1 == n2){
		printf("\n Os dois numeros são iguais");
	}
	
	
}