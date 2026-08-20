#include <stdio.h>
#include <locale.h>

/* Faça um programa que receba o salário base de um funcionário, 
calcule e mostre o salário a receber, sabendo-se que o funcionário 
tem gratificação de 5% sobre o salário base e paga imposto de 7% 
também sobre o salário base

Faça exibir o valor da gratificação, valor do imposto e o salário a receber;
*/



int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float salario, grat, imposto, sal_liquido;
    
    printf("Digite seu salário: \n");
    scanf("\n%f%*c", &salario);
    
    grat = salario * 0.05;
    imposto = salario * 0.07;
    sal_liquido = (salario + grat) - imposto;
    
    printf("A gratificação é de: %.2f\n", grat);
    printf("O imposto é: %.2f\n", imposto);
    printf("O salario a receber é: %.2f\n", sal_liquido);
    
    system("pause");
    return 0;
}
