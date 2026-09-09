#include <stdio.h>
#include <string.h>
#include "rotina3.h"

int main(){
	int seg_totais, horas, minutos, segundos;

	printf("Digite o valor em segundos: ");
	scanf("%d", &seg_totais);

	conversao(seg_totais, &horas, &minutos, &segundos);

	printf("%d Segundo(s) equivale(m) a %d hora(s), %d minuto(s) e %d segundo(s)", seg_totais, horas, minutos, segundos);

	return 0;
}

