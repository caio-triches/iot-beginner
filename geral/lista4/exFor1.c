#include<stdio.h>
#include<stdlib.h>

int main(){
	int ano, meta;
	float sal = 1000, taxa = 0.015;
	
	printf("Digite um ano: ");
	scanf("%d*c", &meta);
	
	
	for(ano=2019; ano<=meta; ano++){
		sal = (sal * taxa) + sal;
		
		taxa = taxa * 2;
	}
	
	printf("\nAtual salario: %.2f", sal); 
	
}