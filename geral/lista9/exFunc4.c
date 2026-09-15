#include <stdio.h>
#include "rotina4.h"

int main(){
    int a, b, c, d, maior, menor;

    printf("Digite 4 numeros: ");

    scanf("%d %d %d %d", &a, &b, &c, &d);

    maior_menor(a, b, c, d, &maior, &menor);

    printf("O maior numero e %d\n", maior);
    printf("O menor numero e %d", menor);

    return 0;
}
