#include <stdio.h>
#include <locale.h>
#define TAM 5

#include "ler_dados.c"
#include "calcular_media_idade.c"
#include "calcular_maior_idade.c"
#include "contar_mulheres_especificas.c"

int main() {
    setlocale(LC_ALL, "Portuguese");

    char sexo[TAM];
    char olhos[TAM];
    char cabelos[TAM];
    int idade[TAM];

    ler_dados(sexo, olhos, cabelos, idade);

    float media = calcular_media_idade(olhos, cabelos, idade);
    int maior_idade = calcular_maior_idade(idade);
    int qtd_mulheres = contar_mulheres_especificas(sexo, olhos, cabelos, idade);

    printf("Média de idade das pessoas com olhos castanhos e cabelos pretos = %.2f\n", media);
    printf("Maior idade entre os habitantes = %d\n", maior_idade);
    printf("Quantidade de mulheres louras com olhos azuis e idade entre 18 e 35 = %d\n", qtd_mulheres);

    return 0;
}
