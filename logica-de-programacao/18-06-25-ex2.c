int main() {
    
    printf("Exercicio 2: média entre 10 números\n");
    
    int valores[10] = {5,1,55,3,2,8,7,4,12,10};
    
    int tamanhoArray;
    
    float somaValores = 0;
    float mediaValores = 0;
    
    tamanhoArray = sizeof(valores)/sizeof(valores[0]);
    
    for(int i = 0; i < tamanhoArray; i++ ){
        somaValores += valores[i];
    }
    
    mediaValores = somaValores / tamanhoArray;
    
    printf("A média dos valores que você digitou é: \n");
    
    printf("%.2f", mediaValores);
    

    return 0;