#include <stdio.h>
#include <stdlib.h>

int main(){
	int op;
    float sal, imp, newSal, vImp, amnt;
	
	
	printf("1 - Imposto \n");
	printf("2 - Novo Salario\n");
	printf("3 - Classificacao\n");
    printf("\nEscolha umas das opçoes acima: ");
    scanf("%d*c", &op);

    switch (op)
    {
    case 1:
        printf("\n Digite o seu salario: ");
        scanf("%f", &sal);

        if(sal < 500){
            imp = 0.05;
        }else if(sal >= 500 && sal <= 850){
            imp = 0.10;
        }else if(sal > 850){
            imp = 0.15;
        }

        vImp = sal * imp;
        newSal = sal - vImp;

        printf("\n Esse eh o seu salario com imposto: %f", newSal);
        printf("\n Esse eh o valor do imposto: %f", vImp);
        break;

    case 2:
        printf("\n Digite o seu salario: ");
        scanf("%f", &sal);

        if(sal > 1500){
            amnt = 25;
        }else if(sal >= 750 && sal <= 1500){
            amnt = 50;
        }else if(sal >= 450 && sal <= 749){
            amnt = 75;
        }else if(sal < 450){
            amnt = 100;
        }

        sal = sal + amnt;
       
        printf("\n Esse é o seu novo salario com o aumento: %f", sal);

        break;

    case 3:
        printf("\n Digite o seu salario: ");
        scanf("%f", &sal);

        if(sal <= 700){
            printf("\n Mal remunerado!");
        }else if(sal > 700){
             printf("\n Bem remunerado!");
        }
        
        break;
    
    default:
        printf("Opção invalida");
        break;
    }
}