#include <stdio.h>
int main(){
    // Declarando o vetor
    int idades[5];//  = {18,17, 25, 32, 28}; 
    // Atribuição estática (antes da compilação)
    idades[1]=17;
    idades[4]=28;

    // Atribuição dinâmica (código sendo executado)
    printf("Digite uma idade: ");
    scanf("%d", &idades[2]);

    for (int i = 0; i < 5; i++){
        //Acessando o valor presente no índice i
        printf("indice: %d, valor: %d \n",i, idades[i]);
    }
    
    return 0;
}