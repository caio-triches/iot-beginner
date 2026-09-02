#include<stdio.h>

/*fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre:
-O salario atual,
-O valor do aumento 
-O novo salario, sabendo-se que este sofreu um aumento de 25%
*/

int main(){
    
    float salario, aumento, novoSalario;
    
    printf("digite seu sal�rio\n");
    scanf("%f%*c", &salario);
    
    aumento = salario * 0.26;
    novoSalario = salario + aumento;
    
    printf("\n O aumento foi de: %.2f\n", aumento);
    printf("\n Ent�o o novo sal�rio �: %.2f\n", novoSalario);
    
    system("pause");
    return 0;
}
