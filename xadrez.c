#include <stdio.h>
//Recursividade movimento Torre
void moverTorres(int casas){
    if (casas > 0) 
    {
        printf("Torre direita\n");
        moverTorres(casas - 1);
    }
    
}
//Recursividade movimento Bispo
void moverBispo(int casas){
    if (casas > 0) 
    {
        printf("Bispo, Diagonal a direita \n");
        moverTorres(casas - 1);
    }
    
}
//Recursividade movimento Rainha
void moverRainha(int casas){
    if (casas > 0) 
    {
        printf("Rainha a esquerda \n");
        moverRainha(casas - 1);
    }
    
}

int main(){
     
    printf("\nÉ a vez da Torre!\n");

    moverTorres(5);

    
    printf("\nÉ a vez do Bispo!\n");
    
    moverTorres(5);



    printf("\nÉ a vez da Rainha!\n");

    moverRainha(8);




    printf("\nÉ a vez do Cavalo!\n");
// Loop complexo para contar o movimento em "L" do Cavalo
    for (int i = 1, j = 0; i <= 3 && j <= 1; i++, j++)
    {
        printf("Cavalo, cima- %d e direita %d \n", i, j);
         
    }




    return 0;
}