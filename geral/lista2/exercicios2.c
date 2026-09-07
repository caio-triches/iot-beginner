#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade;
	
	printf("Digite a sua idade: \n");
	
	scanf("%d", &idade);
	
	if(idade <= 0)
		printf("Idade menor que zero");
	else if(idade <= 11)
		printf("Você tem %d . Perante essa idade você é crinça!", idade);
	else if((idade >= 12) && (idade <= 18))
		printf("Você tem %d . Perante essa idade você é Adolescente!", idade);
	else if((idade >= 19) && (idade <= 24))
		printf("Você tem %d . Perante essa idade você é Jovem!", idade);
	else if((idade >= 25) && (idade <= 59))
		printf("Você tem %d . Perante essa idade você é Adulto!", idade);
	else if(idade >= 60)
		printf("Você tem %d . Perante essa idade você é Idoso!", idade);
}