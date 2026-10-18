#include <stdio.h>

int main() {
    float matriz[5][3];
    int i, j;
    int maiorArmazem;
    int menorArmazem;
    float menorQtd;
    float totalItens;
    float soma;
    float qtdTotal;
    float custoTotal;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o estoque do produto %d no armazem %d: ", j + 1, i + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (j = 0; j < 3; j++) {
        printf("Digite o custo do produto %d: ", j + 1);
        scanf("%f", &matriz[4][j]);
    }

    for (i = 0; i < 4; i++) {
        totalItens = 0;
        for (j = 0; j < 3; j++) {
            totalItens += matriz[i][j];
        }
        printf("O total de itens no armazem %d e\t%6.2f\n", i + 1, totalItens);
    }

    menorArmazem = 0;
    menorQtd = 0;
    for (j = 0; j < 3; j++) {
        menorQtd += matriz[0][j];
    }
    for (i = 1; i < 4; i++) {
        soma = 0;
        for (j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
        if (soma < menorQtd) {
            menorQtd = soma;
            menorArmazem = i;
        }
    }
    printf("Armazem com menor estoque %d\n", menorArmazem + 1);

    
    maiorArmazem = 0;
    for (i = 1; i < 4; i++) {
        if (matriz[i][1] > matriz[maiorArmazem][1]) {
            maiorArmazem = i;
        }
    }
    printf("O maior estoque do produto 2 esta no armazem %d\n", maiorArmazem + 1);

    
    for (j = 0; j < 3; j++) {
        qtdTotal = 0;
        for (i = 0; i < 4; i++) {
            qtdTotal += matriz[i][j];
        }
        printf("O custo total do produto %d:\t%6.2f\n", j + 1, qtdTotal * matriz[4][j]);
    }

    for (i = 0; i < 4; i++) {
        custoTotal = 0;
        for (j = 0; j < 3; j++) {
            custoTotal += matriz[i][j] * matriz[4][j];
        }
        printf("O custo total do armazem %d e\t%6.2f\n", i + 1, custoTotal);
    }

    return 0;
}