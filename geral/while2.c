#include <stdio.h> // 1539,04
#include<stdlib.h>

main(){
	int ano = 2020, meta;
	float  taxa = 0.015, sal = 1000.0;
	
	
	printf("Digite um ano: ");
	scanf("%d%*c", &meta);
	
	
	while(ano < meta){
		printf("\n %d", ano);
		sal = (sal * taxa) + sal;
		taxa = taxa * 2;
		ano++;

	}
	
	printf("Atual salario: %.2f", sal); 
	
}