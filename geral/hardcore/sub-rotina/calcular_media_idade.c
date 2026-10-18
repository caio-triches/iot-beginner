float calcular_media_idade(char olhos[], char cabelos[], int idade[]) {
    int soma = 0;
    int cont = 0;
    int i = 0;

    for (i = 0; i < TAM; i++) {
        if (toupper(olhos[i]) == 'C' && toupper(cabelos[i]) == 'P') {
            soma += idade[i];
            cont++;
        }
    }

    if (cont > 0) {
        return (float)soma / cont;
    }
    return 0.0;
}
