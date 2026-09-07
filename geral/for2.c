#include <stdio.h>
#include<stdlib.h>

int main(){
	int cont,i,num;
	
	cont = 0;
	
	for(i = 1; i<=5;i++){
		printf("Digite um numero");
		scanf("%d%*c", &num);
		if(num>5){ cont = cont + 1; }
	}
	
	printf("Contador = %d", cont);
}