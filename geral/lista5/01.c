#include <stdio.h>
#include <stdlib.h>

int main(){
    int nascimentos, cont = 0, meses;
    float perM = 0, perF = 0, per24 = 0, fatalidadesM = 0, fatalidadesF = 0, criancas24 = 0;
    char sexo;

    printf("Digite o numero de criancas nascidas no periodo: ");
    scanf("%d%*c", &nascimentos);

    while(cont < nascimentos){
        printf("Digite o sexo da %d criança (M ou F): ", cont+1);
        scanf(" %c", &sexo);

        printf("Digite o tempo de vida dessa criança (em meses): ");
        scanf("%d%*c", &meses);

        if(sexo == 'M' || sexo == 'm'){
            fatalidadesM++;
        }else if(sexo == 'F' || sexo == 'f'){
            fatalidadesF++;
        }

        if(meses <= 24){
            criancas24++;       
        }

        cont++;
    }
    
    per24 = (criancas24 * 100) / nascimentos; 
    perM = (fatalidadesM * 100) / nascimentos;
    perF = (fatalidadesF * 100) / nascimentos;

    printf("\nPorcentagem de criancas do sexo masculino mortas: %.1f%%", perM);
    printf("\nPorcentagem de criancas do sexo feminino mortas: %.1f%%", perF);
    printf("\nPorcentagem de criancas que viveram 24 meses ou menos no periodo: %.1f%%", per24);

}