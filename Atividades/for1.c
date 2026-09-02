#include <stdio.h>
#include<stdlib.h>

int main(){
	int soma,i,num;
	
	soma = 0;
	
	for(i = 1; i<=4;i++){
		printf("Digite um numero");
		scanf("%d%*c", &num);
		soma = soma + num;
	}
	
	printf("Soma = %d", soma);
}