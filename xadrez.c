#include <stdio.h>

int main(){
    int torre = 1; // declarei a variavel torre e dei o valor de 1 
    int bispo = 1; // declarei a variavel bispo e dei valor 1
    int rainha; // declarei a variavel rainha
    
    printf("\nÉ a vez da Torre!\n");

    while (torre <= 5) { // coloquei dentro função while para contar os passos da torre

            printf("Torre dando %dº passo para Direita!\n", torre);
            torre ++;       
    }  
    
    printf("\nÉ a vez do Bispo!\n");
    // coloquei dentro função do - while para contar os passos do bispo
    do{
        printf("Bispo dando %dº passo para Diagonal, Direita!\n", bispo);
        bispo ++; 

    } while (bispo <= 5);
    {
        
    }

    printf("\nÉ a vez da Rainha!\n");

    for (rainha = 1; rainha <= 8; rainha ++) // coloquei dentro da função for para contar os passos da rainha
{
    printf("Rainha dando %dº passo para Esquerda!\n", rainha);
}

    return 0;
}