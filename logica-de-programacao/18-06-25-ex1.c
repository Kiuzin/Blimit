// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    printf("Exercicio 1: 50 números no array\n");
    
    int variavel[50];
    
    int tamanho = sizeof(variavel)/sizeof(variavel[0]);
    
    int intervaloDosNumeros;
    
    printf("Digite qual o valor máximo dos números que serão gerados aleatoriamente:\n");
    scanf("%d", &intervaloDosNumeros);
    
    //printf("%d", tamanho);
    printf("Estes são seus 50 números:\n ");
    for(int i = 0; i < tamanho; i++){
        variavel[i] = rand() % intervaloDosNumeros; //aqui eu resolvi pesquisar a função de random em C, por preguiça de escrever todos os 50 numeros
        printf("%d ", variavel[i]);
    }

    return 0;