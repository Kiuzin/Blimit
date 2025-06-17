// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int valorA;
    int valorB;
    int valorC;
    
    int opcaoDecrescente;
    
    printf("Exercicio 1: Ordenar números em ordem descrescente ou crescentes.\n");
    
    printf("Digite o primeiro número: ");
    scanf("%d", &valorA);
    
    printf("Digite o segundo número: ");
    scanf("%d", &valorB);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &valorC);
    
    printf("Qual opção de exibição você deseja? (1 - Crescente, 2 - Decrescente).");
    scanf("%d", &opcaoDecrescente);
    
    if (opcaoDecrescente == 1) {
        
        if (valorA <= valorB && valorA <= valorC) {
            printf("%d ", valorA);
            if (valorB <= valorC) {
                printf("%d %d\n", valorB, valorC);
            } else {
                printf("%d %d\n", valorC, valorB);
            }
        } else if (valorB <= valorA && valorB <= valorC) {
            printf("%d ", valorB);
            if (valorA <= valorC) {
                printf("%d %d\n", valorA, valorC);
            } else {
                printf("%d %d\n", valorC, valorA);
            }
        } else {
            printf("%d ", valorC);
            if (valorA <= valorB) {
                printf("%d %d\n", valorA, valorB);
            } else {
                printf("%d %d\n", valorB, valorA);
            }
        }
    } else if (opcaoDecrescente == 2) {
        
        if (valorA >= valorB && valorA >= valorC) {
            printf("%d ", valorA);
            if (valorB >= valorC) {
                printf("%d %d\n", valorB, valorC);
            } else {
                printf("%d %d\n", valorC, valorB);
            }
        } else if (valorB >= valorA && valorB >= valorC) {
            printf("%d ", valorB);
            if (valorA >= valorC) {
                printf("%d %d\n", valorA, valorC);
            } else {
                printf("%d %d\n", valorC, valorA);
            }
        } else {
            printf("%d ", valorC);
            if (valorA >= valorB) {
                printf("%d %d\n", valorA, valorB);
            } else {
                printf("%d %d\n", valorB, valorA);
            }
        }
    } else {
        printf("Opção inválida, Por favor, Tente Novamente\n");
        return main();
    }
    
    
    
    return 0;
}