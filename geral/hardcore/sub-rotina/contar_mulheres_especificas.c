int contar_mulheres_especificas(char sexo[], char olhos[], char cabelos[], int idade[]) {
    int cont = 0;
    int i = 0;

    for (i = 0; i < TAM; i++) {
        if (toupper(sexo[i]) == 'F' && idade[i] >= 18 && idade[i] <= 35 && toupper(olhos[i]) == 'A' && toupper(cabelos[i]) == 'L') {
            cont++;
        }
    }

    return cont;
}

