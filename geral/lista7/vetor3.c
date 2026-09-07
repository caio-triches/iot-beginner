#include <stdio.h>
#include <stdbool.h>

int main(){
	int i, j, vetor[5];
    bool ehmaior50 = false;

    for(i=0;i<5;i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for(j=0;j<5;j++){
        if(vetor[j] > 50){
            printf("\nEste numero: %d é maior que cinquenta e sua posição é: %d", vetor[j], j);
            ehmaior50 = true;
        }
    }

    if(!ehmaior50){
        printf("\nNão existe numeros maiores que cinquenta!");
    } 
}