#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n1, n2, n3, n4, soma = 0;
    
    printf("Digite o numero 1: ");
    scanf("%d*c",&n1);
    
    printf("Digite o numero 2: ");
    scanf("%d*c",&n2);
    
    printf("Digite o numero 3: ");
    scanf("%d*c",&n3);
    
    printf("Digite o numero 4: ");
    scanf("%d*c",&n4);
    
    soma = n1 + n2 + n3 + n4;
    
    printf("Essa é a soma de todos os numero: %d", soma);
    
}
