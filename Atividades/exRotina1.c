#include <stdio.h>
#include <string.h>
#include "C:\Users\caio_b_machado.EDU_FIESC\Documents\iot-beginner\Atividades\rotina1.h"


int main(){
	int res, num;
	
	printf("Digite um numero: ");
	scanf("%d%*c", &num);
	
	res = verificar_num(num);
	
	if(res == 1){
		printf("Numero positivo!");
	}else if(res == 0){
		printf("Numero negativo!");
	}
	
	return 0;
}

