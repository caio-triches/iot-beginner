#include <stdio.h>
#include <string.h>

void maior_menor(int a, int b, int c, int d, int *maior, int *menor){
	if(a > b && a > c && a > d){
		*maior = a;
	}else if(b > a && b > c && b > d){
		*maior = b;
	}else if(c > a && c > b && c > d){
		*maior = c;
	}else{
		*maior = d;
	}

    if(a < b && a < c && a < d){
		*menor = a;
	}else if(b < a && b < c && b < d){
		*menor = b;
	}else if(c < a && c < b && c < d){
		*menor = c;
	}else{
		*menor = d;
	}
	
    if(*maior < *menor){
		*maior = *menor;
		*menor = *maior;
	}
}

