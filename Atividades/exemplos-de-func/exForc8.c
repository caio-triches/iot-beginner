#include <stdio.h>
#include <string.h>


int soma_dobro(int *a, int *b);


int main(){
	int x, y, res;
	
	printf("\n Digite o primeiro numero");
	scanf("%d%*c", &x);
	
	printf("\n Digite o segundo numero");
	scanf("%d%*c", &y);
	
	res  = soma_dobro(&x,& y);
	
	printf("\n Soma do dobro dos numeros, %d e %d = %d", x, y, res);
			
	getchar();

	return 0;
}

int soma_dobro(int *a, int *b){
	int  soma;
	*a = 2 * (*a);
	*b = 2 * (*b);
	soma = *a + *b;
	return soma;
}