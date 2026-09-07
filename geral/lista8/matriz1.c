#include <stdio.h>

int main(){
	int i, j, k, h, l, m, maior = 0, matriz[2][2], matrizR[2][2], valor = 0;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite um valor pra sua matrix 2x2: ");
            scanf("%d", &matriz[i][j]);

            if(maior < matriz[i][j]){
                maior = matriz[i][j];
            }
        }
    }

    for(k=0;k<2;k++){
        for(h=0;h<2;h++){
            matrizR[k][h] = matriz[k][h] * maior;
        } 
    }

    printf("\nMatriz Resultante: ");

    for(l=0;l<2;l++){
        printf("\n");
        for(m=0;m<2;m++){
            printf("%d ", matrizR[l][m]);
        } 
    }

}