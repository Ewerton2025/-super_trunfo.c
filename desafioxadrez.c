#include <stdio.h>
int main(){
    int Bispo = 0;
    int rainha = 0;
    //torre
    for(int i = 0; i < 5; i++){
        printf("Torre se move em 5 casa a direita\n");// movimento da torre;
    
    }// Bispo;
    while (Bispo < 5){
   printf(" Bispo cinco casas na diagonal para cima e a direita\n");//movimento do bispo;
   Bispo++;
   //Rainha;
    }do {
   printf("Rainha oito casas para a esquerda\n");
   rainha++;
    } while (rainha <= 7);
    
    

    

    return 0;
}