#include <stdio.h>
#include <string.h>

int soma_num(int x, int y){
	int i, res = 0;
	
	for(i=x+1;i<y;i++){
		res = res + i;
	}
	
	return res;
}

