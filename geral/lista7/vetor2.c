#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i, j, quantLitros[5], cemKmPL = 0, litros = 100, menor = 99999;
    char veiculos[5][20], maiorEconomico[0][20];

    for(i=0;i<5;i++){
        printf("Digite o nome carro %d: ", i+1);
        scanf("%s",&veiculos[i]);
    }

    for(j=0;j<5;j++){
        printf("Digite quantos km's por litro que o veiculo %d faz: ", j+1);
        scanf("%d", &quantLitros[j]);

        cemKmPL = litros / quantLitros[j];
        if(cemKmPL < menor){
            menor = cemKmPL;
            strcpy(maiorEconomico[0], veiculos[j]);
        }

        printf("O veiculo %s consome %d litros combustivel para percorrer %d km/s \n", veiculos[j], cemKmPL*10, litros);

    }

    printf("O carro mais economico eh: %s", maiorEconomico[0]);

    // for(j=0;j<5;j++){
    //     printf("Veiculos: %s", veiculos[j]);
    // }
	
}