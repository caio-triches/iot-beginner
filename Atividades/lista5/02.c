#include <stdio.h> 
#include<stdlib.h>

int main(){
	int cont = 0, totalA = 0, totalR = 0, totalE = 0;
	float nota1, nota2, med, medTotal = 0, totalMedia = 0;
	
	
	while(cont < 6){
		printf("\n Digita a nota 1 do aluno %d: ", cont+1);
		scanf("%f%*c",&nota1);	
		
		printf("\n Digita a nota 2 do aluno %d: ", cont+1);
		scanf("%f%*c",&nota2);

		med = (nota1 + nota2) / 2;
		
		totalMedia = totalMedia + med;
		
		if(med <= 3.0){
			printf("\n Você foi Reprovado com media: %f", med);
			totalR++;
		}else if(med >= 3.1 && med < 7.0){
			printf("\n Você está de exame com media: %f", med);
			totalE++;
		}else if(med >= 7.1){
			printf("\n Você foi Aprovado com media: %f", med);
			totalA++;
		}

		cont++;

	}
	
	medTotal = totalMedia / cont;
	
	printf("\n Total de alunos Reprovados: %d", totalR);
	printf("\n Total de alunos em Exame: %d", totalE);
	printf("\n Total de alunos Aprovados: %d", totalA);
	printf("\n Media total dos alunos: %.2f", medTotal);

	
	
	
}