#include <stdio.h>
#include<stdlib.h>

main(){
	
	int maior, menor, cod, nV, nAtv, i, veiculos, med, medVeiculos, totalVeiculos, totalCidades = 0, codMaior, codMenor;
	
	maior = 0;
	menor = nAtv;
	

	for(i=0;i<=3;i++){
		printf("\n Digite o codigo da cidade");
		scanf("%d%*c",&cod);
		
		printf("\n Digite o numero de veiculos de passeio: ");
		scanf("%d%*c",&veiculos);
		
		printf("\n Digite o numero de acidentes de transito com vitimas: ");
		scanf("%d%*c",&nAtv);
		
		if(nAtv > maior){
			maior = nAtv;
			codMaior = cod;
		}
		
		if(nAtv < menor){
			menor = nAtv;
			codMenor = cod;
		}
		
		if(veiculos < 2000){
			totalCidades++;
			totalVeiculos = totalVeiculos + veiculos;
		}
		
		nV = nV + veiculos;
		
	}
	
	printf("%d", i);
	printf("%d", totalCidades);
	
	med = nV / i;
	
	medVeiculos = totalVeiculos / totalCidades;
	
	
	printf("\n Media de veiculos: %d", med); 
	printf("\n Maior Numero de acidentes: %d", maior);
	printf(". E o codigo desta cidade é: %d", codMaior);
	printf("\n Menor Numero de acidentes: %d", menor);
	printf(". E o codigo desta cidade é: %d", codMenor);
	printf("\n Media de acidentes nas cidade de veiculos menos 2000: %d", medVeiculos);
	
	
	
}