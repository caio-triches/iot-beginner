void ler_dados(char sexo[], char olhos[], char cabelos[], int idade[]) {
    int i = 0;

    for (i = 0; i < TAM; i++) {
        printf("Dados da %dª a pessoa\n\n", i + 1);
        printf("Digite o sexo (M ou F) ");
        scanf(" %c", &sexo[i]);
        printf("Digite a cor dos olhos (C-castanhos ou A-azuis) ");
        scanf(" %c", &olhos[i]);
        printf("Digite a cor dos cabelos (C-castanhos, L-louros ou P-pretos) ");
        scanf(" %c", &cabelos[i]);
        printf("Digite a idade ");
        scanf("%d", &idade[i]);
        printf("\n");
    }
}

