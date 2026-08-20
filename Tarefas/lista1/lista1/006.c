#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n1, n2, n3, med, soma = 0;
    
    printf("Digite a nota 1: ");
    scanf("%d*c",&n1);
    
    printf("Digite a nota 2: ");
    scanf("%d*c",&n2);
    
    printf("Digite a nota 3: ");
    scanf("%d*c",&n3);
    
    soma = n1 + n2 + n3;
    
    med = soma / 3;
    
    printf("Essa é a sua nota: %d", med);
    
}
