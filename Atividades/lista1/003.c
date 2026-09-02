#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba o valor de um depósito e o 
valor da taxa de juros, calcule e mostre o valor do 
rendimento e o valor total depois do rendimento.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float rendimento, salario, taxa;
    
    printf("Digite o valor do depósito: \n");
    scanf("%f%*c", &salario);
    
    printf("Digite o valor da taxa de juros: \n");
    scanf("%f%*c", &taxa);
    
    rendimento = salario + salario * taxa/100;
    
    printf("\nO valor do rendimento é: R$%.2f", salario * taxa/100);
    printf("\nO valor depositado rendido é: R$%.2f\n\n", rendimento);
    
    system("pause");
    return 0;
        
}
