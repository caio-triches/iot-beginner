#include <stdio.h>
#include<stdlib.h>

main(){
	int sal, ano, meta;
	float  taxa = 0.015;
	sal = 1000;
	
	printf("Digite um ano: ");
	scanf("%d%*c", &meta);
	
	
	for(ano = 2019;ano<=meta;ano++){
		printf("Atual salario: %d", sal);
		sal = (sal * taxa) + sal;
		
		taxa = taxa * 2;
	}
	
	printf("Atual salario: %.2f", sal); 
	
}