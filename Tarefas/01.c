#include <stdio.h>
#include <stdlib.h>

int main(){
	float calc = 0, n1, n2, n3;
	char operacao;
	
	printf("Digite um numero: ");
	scanf("%f",&n1);
	
	printf("Digite outro numero: ");
	scanf("%f",&n2);
	
	printf("Digite uma operação para fazer nesses dois numeros (+ , - , / , *): ");
	scanf(" %c", &operacao );
	
	printf("%c",operacao);
	
	if(operacao == '+'){
		calc = n1 + n2;
	}else if(operacao == '-'){
		calc = n1 - n2;
	}else if(operacao == '*'){
		calc = n1 * n2;
	}else if(operacao == '/'){
		calc = n1 / n2;
	}
	
	printf("Esse é o resultado: %f", calc);
	
	
}