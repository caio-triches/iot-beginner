#include <stdio.h>
#include<stdlib.h>

int main(){
	
	int maior = 0, menor = 99999, cod, nV = 0, nAtv, i, veiculos, medVeiculos, medAcidentes, totalAcidentes = 0, totalCidades = 0, codMaior = 0, codMenor = 0;
	

	for(i=0;i<3;i++){
		printf("\n Digite o codigo da cidade: ");
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
			totalAcidentes = totalAcidentes + nAtv;
		}
		
		nV = nV + veiculos;
		
	}
	
	medVeiculos = nV / i;
	
	medAcidentes = totalAcidentes / totalCidades;
	
	printf("\n Media de veiculos: %d", medVeiculos); 
	printf("\n Maior Numero de acidentes: %d", maior);
	printf(". E o codigo desta cidade é: %d", codMaior);
	printf("\n Menor Numero de acidentes: %d", menor);
	printf(". E o codigo desta cidade é: %d", codMenor);
	printf("\n Media de acidentes nas cidade de veiculos com menos de dois mil veiculos: %d", medAcidentes);
	
	
	
}