#include <stdio.h>
#include <string.h>
#include "C:\Users\caio_b_machado.EDU_FIESC\Documents\iot-beginner\Atividades\rotina2.h"

int main(){
	int num1, num2, soma;
	
	printf("Digite um numero: ");
	scanf("%d%*c",&num1);
	
	printf("Digite outro numero: ");
	scanf("%d%*c",&num2);
	
	if(num2 < num1){
		printf("Numeros incorretos");
		return 0;
	}
		
	soma = soma_num(num1, num2);
	
	printf("Soma = %d", soma);
	
	


}

