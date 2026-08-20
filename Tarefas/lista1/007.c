#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n1, n2, n3, peso1, peso2, peso3, somaP, somaN, medPond;
    
    printf("Digite a nota 1: ");
    scanf("%d*c",&n1);
    
    printf("Digite o peso dessa nota: ");
    scanf("%d*c",&peso1);
    
    printf("Digite a nota 2: ");
    scanf("%d*c",&n2);
    
    printf("Digite o peso dessa nota: ");
    scanf("%d*c",&peso2);
    
    printf("Digite a nota 3: ");
    scanf("%d*c",&n3);
    
    printf("Digite o peso dessa nota: ");
    scanf("%d*c",&peso3);
    
    somaP = peso1 + peso2 + peso3;
    
    somaN = n1 + n2 + n3;
    
    medPond = somaN / somaP;
    
    printf("Essa é a usa media ponderada: %d", medPond);
    
}
