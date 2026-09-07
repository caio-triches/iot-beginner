#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	int vetor[9], i, j, div;
	bool ehprimo = true;
	
	for(i=0;i<9;i++){
		printf("Digite um numero para o vetor: ");
		scanf("%d%*c", &vetor[i]);
	}
	
	for(j=0;j<9;j++){
		if(vetor[j] > 1){
			for(div=2;div<vetor[j];div++){
				if(vetor[j] % div == 0){
					ehprimo = false;
				}
				}

				if(ehprimo){
				printf("\n %d", vetor[j]);
				}

				ehprimo = true;	
			}
		}
	}