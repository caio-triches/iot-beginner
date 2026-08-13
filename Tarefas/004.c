#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float pes, polegadas, jardas, milhas;
    
    printf("Digite a medida em pés: ");
    scanf("%f%*c", &pes);
    
    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;
    
    printf("A conversão de %.2f Pés\n", pes);
    printf("%.2f Pés para Polegadas: %.2f\n", pes, polegadas);
    printf("%.2f Pés para Jardas: %.2f\n", pes, jardas);
    printf("%.2f Jardas para Milhas: %.2f\n", jardas, milhas);
    
    system("pause");
    return 0;
}
