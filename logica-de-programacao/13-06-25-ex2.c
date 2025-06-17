// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    printf("Exercicio 2: Dias da semana.\n");
    
    int diaDaSemana;
    
    while(diaDaSemana < 1 || diaDaSemana > 7){
        
        printf("Digite um número de 1 a 7: ");
        scanf("%d", &diaDaSemana);
    
        printf("Você escolheu o dia: ");
    
        if(diaDaSemana == 1){
            printf("Domingo");
            break;
        }
        else if(diaDaSemana == 2){
            printf("Segunda");
            break;
        }
        else if(diaDaSemana == 3){
            printf("Terça");
            break;
        }
        else if(diaDaSemana == 4){
            printf("Quarta");
            break;
        }
        else if(diaDaSemana == 5){
            printf("Quinta");
            break;
        }
        else if(diaDaSemana == 6){
            printf("Sexta");
            break;
        }
        else if(diaDaSemana == 7){
            printf("Sábado");
            break;
        }
        else{
            printf("Valor Inválido, por favor, tente novamente.\n");
        }
    }

    return 0;
}