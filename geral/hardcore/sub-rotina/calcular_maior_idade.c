int calcular_maior_idade(int idade[]) {
    int maior = idade[0];
    int i = 0;

    for (i = 1; i < TAM; i++) {
        if (idade[i] > maior) {
            maior = idade[i];
        }
    }

    return maior;
}

