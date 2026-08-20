#include <stdio.h>
#include<stdlib.h>

main(){
	int x = 1, y = 10;
	
	while(y > x){
		printf("\n Valor de Y = %d", y);
		y=y-2;
	}
	
	printf("\n Valor de Y depois que sair de estrutura: %d", y);
	
}