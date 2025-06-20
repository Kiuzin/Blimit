// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Exercicio Bônus: encontre duplicatas no array.\n");
    
    int variavel[10] = {1, 2, 3, 4, 5, 6 ,7, 8, 9, 0};
    
    int tamanho = sizeof(variavel)/sizeof(variavel[0]);
    
    bool duplicado;
    
    for(int i = 0; i < tamanho; i++){
        for(int a = i + 1; a < tamanho; a++){
            if(variavel[i] == variavel[a]){
                duplicado = true;
            }
        }
    }
    
    if(duplicado){
        printf("Número duplicado");
    }
    else{
        printf("Sem duplicatas");
    }

    return 0;