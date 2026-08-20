#include <stdio.h>
#include <locale.h>

/*faça um programa que receba o salário de um funcionário, calcule e mostre:
-O salario atual,
-O valor do aumento 
-O novo salario, sabendo-se que este sofreu um aumento de 25%
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float salario, aumento, novoSalario;
    
    printf("digite seu salário\n");
    scanf("%f%*c", &salario);
    
    aumento = salario * 0.25;
    novoSalario = salario + aumento;
    
    printf("\n O aumento foi de: %.2f\n", aumento);
    printf("\n Então o novo salário é: %.2f\n", novoSalario);
    
    system("pause");
    return 0;
}
