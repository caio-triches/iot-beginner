#include <stdio.h>
#include <stdlib.h>

// 1. Janeiro
// 2. Fevereiro
// 3. Março
// 4. Abril
// 5. Maio
// 6. Junho
// 7. Julho
// 8. Agosto
// 9. Setembro
// 10. Outubro
// 11. Novembro
// 12. Dezembro

int main(){
	int dia, mes;
    char signo;
	
	printf("Digite o dia do seu nascimento: ");
	scanf("%d",&dia);
	
	printf("Digite o mes do seu nascimento: ");
	scanf("%d",&mes);

    if(dia >= 32 || mes > 12 || mes < 1 || dia < 1){
        printf("Data invalida! \n");
        system("pause");
        return 0;
    }
    
    if((dia >= 20 && mes == 1) || (dia <= 18 && mes == 2)){
    printf("Voce eh de Aquario");
    }else if((dia >= 19 && mes == 2) || (dia <= 20 && mes == 3)){
        printf("Voce eh de Peixes");
    }else if((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4)){
        printf("Voce eh de Aries");
    }else if((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5)){
        printf("Voce eh de Touro");
    }else if((dia >= 21 && mes == 5) || (dia <= 21 && mes == 6)){
        printf("Voce eh de Gemeos");
    }else if((dia >= 22 && mes == 6) || (dia <= 22 && mes == 7)){
        printf("Voce eh de Cancer");
    }else if((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8)){
        printf("Voce eh de Leao");
    }else if((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)){
        printf("Voce eh de Virgem");
    }else if((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)){
        printf("Voce eh de Libra");
    }else if((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)){
        printf("Voce eh de Escorpiao");
    }else if((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)){
        printf("Voce eh de Sagitario");
    }else if((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1)){
        printf("Voce eh de Capricornio");
    }else{
        printf("Data invalida!");
    }
	
}