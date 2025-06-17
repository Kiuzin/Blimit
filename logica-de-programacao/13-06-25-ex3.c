// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int opcaoExibicao;
    
    printf("Exercicio 3: Numeros de 1 a 20\n");
    
    printf("Como você prefere que os números sejam exibidos? (1 - Um abaixo do outro, 2 - Um ao lado do outro)\n");
    scanf("%d", &opcaoExibicao);
    
    if(opcaoExibicao == 1)
    {
        for(int i = 1; i < 21; i++)
        {
        printf("%d\n", i);
        }
    }
    else if(opcaoExibicao == 2)
    {
        for(int i = 1; i < 21; i++)
        {
        printf("%d ", i);
        }
    }
    else{
        printf("Opção inexistente\n");
        return main();
    }
    

    return 0;
}