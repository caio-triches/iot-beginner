#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int cont = 0, total_barato = 0, total_normal = 0, total_caro = 0;
    char refrigeracao, categoria, classificacao[50];
    float preco_unitario = 0, preco_final = 0, custo_estocagem = 0, imposto = 0;
    float media_valores_adicionais, total_custo_estocagem = 0, total_imposto = 0;
    float maior_preco_final = 0, menor_preco_final = 0;


    while(cont < 12){

        printf("Digite o preco unitario do produto: ");
        scanf("%f%*c", &preco_unitario);

        printf("Digite a categoria do produto (A, L, V): ");
        scanf("%c%*c", &categoria);

        printf("Digite se o produto tem refrigeracao (S ou N): ");
        scanf("%c%*c", &refrigeracao);

        if(preco_unitario <= 20 && categoria == 'A'){
            custo_estocagem = 2.0;
        }else if(preco_unitario <= 20 && categoria == 'L'){
            custo_estocagem = 3.0;
        }else if(preco_unitario <= 20 && categoria == 'V'){
            custo_estocagem = 4.0;
        }else if(preco_unitario > 20 && preco_unitario <= 50 && refrigeracao == 'S'){
            custo_estocagem = 6.0;
        }else if(preco_unitario > 20 && preco_unitario <= 50 && refrigeracao == 'N'){
            custo_estocagem = 0.0;
        }else if(preco_unitario > 50 && categoria == 'A' && refrigeracao == 'S'){
            custo_estocagem = 5.0;
        }else if(preco_unitario > 50 && categoria == 'L' && refrigeracao == 'S'){
            custo_estocagem = 2.0;
        }else if(preco_unitario > 50 && categoria == 'V' && refrigeracao == 'S'){
            custo_estocagem = 4.0;
        }else if(preco_unitario > 50 && (categoria == 'A' || categoria == 'V') && refrigeracao == 'N'){
            custo_estocagem = 0.0;
        }else if(preco_unitario > 50 && categoria == 'L' && refrigeracao == 'N'){
            custo_estocagem = 1.0;
        }

        if(categoria == 'A' && refrigeracao == 'S'){
            imposto = preco_unitario * 0.04;
        }else{
            imposto = preco_unitario * 0.02;
        }


        preco_final = preco_unitario + custo_estocagem + imposto;

        total_imposto += imposto;
        total_custo_estocagem += custo_estocagem;

        if(preco_final <= 20){
            strcpy(classificacao, "Barato");
            total_barato++;
        }else if(preco_final > 20 && preco_final <= 100){
            strcpy(classificacao, "Normal");
            total_normal++;
        }else if(preco_final > 100){
            strcpy(classificacao, "Caro");
            total_caro++;
        }

        if(cont == 0){
            maior_preco_final = preco_final;
            menor_preco_final = preco_final;
        }else{
            if(preco_final > maior_preco_final){
                maior_preco_final = preco_final;
            }
            if(preco_final < menor_preco_final){
                menor_preco_final = preco_final;
            }
        }

        cont++;

        printf("Preco final: %.2f \n", preco_final);
        printf("Imposto: %.2f \n", imposto);
        printf("Custo de estocagem: %.2f \n", custo_estocagem);
        printf("Classificacao: %s \n", classificacao);
        printf("\n\n");
    }

    media_valores_adicionais = (total_custo_estocagem + total_imposto) / 12;

    printf("Total de produtos baratos: %d \n", total_barato);
    printf("Total de produtos normais: %d \n", total_normal);
    printf("Total de produtos caros: %d \n", total_caro);
    printf("Media do custo de valores adicionais: %.2f \n", media_valores_adicionais);
    printf("Total dos impostos: %.2f \n", total_imposto);
    printf("Maior preco final: %.2f \n", maior_preco_final);
    printf("Menor preco final: %.2f \n", menor_preco_final);

    return 0;
}

  