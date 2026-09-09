#include <stdio.h>
#include <string.h>
#include "C:\Users\caio_b_machado.EDU_FIESC\Documents\iot-beginner\Atividades\rotinas.h"

int main(){
	int num1, num2, res;
	
	sub_rotina1();
	sub_rotina2();
	
	printf("Digite um numero: ");
	scanf("%d%*c",&num1);
	
	printf("Digite outro numero: ");
	scanf("%d%*c",&num2);
	
	res = sub_rotina3(num1, num2);
	
	printf("Resultado = %d", res);
	
	return 0;
}