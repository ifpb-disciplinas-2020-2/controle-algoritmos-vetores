#include <stdio.h>
int main(){
    int idades[5];//  = {18,17, 25, 32, 28}; // Declarando o vetor
    // 18 17 25 32 28
    for(int i=0; i<5; i++){
        printf("Digite a  idade: ");
        scanf("%d", &idades[i]); //Atribuindo o valor à uma posição do vetor
    }
    for (int i = 0; i < 5; i++){
        printf("%d indice: %d \n",i, idades[i]);//Acessando o valor presente no índice i
    }
    
    return 0;
}