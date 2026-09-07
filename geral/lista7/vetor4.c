#include <stdio.h>
#include <stdlib.h>

int main(){
    float valorProdutos[10], valorTotal = 0, valorFinal = 0, prctgn = 0.05, valorVendido = 0.0, salario = 545.00, salarioFinal = 0;
    int posVendido = 0, maiorQuantidade = 0, quantidadeProduto[10];
    int i, j, k;

    for(i=0;i<10;i++){
        printf("\nDigite o valor do produto %d: ", i+1);
        scanf("%f", &valorProdutos[i]);
    }

    for(j=0;j<10;j++){
        printf("\nDigite a quantidade vendida do produto %d: ", j+1);
        scanf("%d", &quantidadeProduto[j]);
    }

    for(k=0;k<10;k++){
        valorTotal = valorProdutos[k] * quantidadeProduto[k];
        valorFinal += valorTotal;

        if(maiorQuantidade  < quantidadeProduto[k]){
            maiorQuantidade = quantidadeProduto[k];
            posVendido = k;
            valorVendido = valorProdutos[k];
        }

        printf("\nVendas do produto %d: valor do produto: %f, quantidade vendida: %d, valor total: %f", k + 1, valorProdutos[k], quantidadeProduto[k], valorTotal);
    }

    salarioFinal = salario + (valorFinal * prctgn);

    printf("\nO salario do vendedor é de: %.2f", salarioFinal);

    printf("\nO valor total das vendas é de: %f", valorFinal);

    printf("\nObjeto mais vendido custa %f, e sua posicao e: %d", valorVendido, posVendido + 1);

    return 0;
}