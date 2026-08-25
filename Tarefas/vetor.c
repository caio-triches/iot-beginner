#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[9], i, j;
	
	for(i=0;i<9;i++){
		printf("Digite um numero para o vetor: ");
		scanf("%d*c", &vetor[i]);
	}
	
	for(j=0;j<9;j++){
		if(vetor[j] > 1){
			if(vetor[j] % 2 == 1 || vetor[j] == 5 || vetor[j] == 2){
				printf("%d", vetor[j]);
			}
			}
		}
	
	}