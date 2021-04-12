/*
Escreva um programa em linguagem C que solicite ao usuário para preencher 
um vetor com cinco posições e, em seguida, exiba o maior e o menor número digitado.
*/
#include <stdio.h>
int main(){
    const int TAM = 5; 
    int numeros[TAM]; // 18, 17, 32, 25, 28
    int maior, menor;
    for(int i=0; i < TAM; i++){
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }
    menor = maior= numeros[0];
    for (int i = 0; i < TAM; i++){
       if(numeros[i] > maior){ 
            maior = numeros[i];
       }  
       if(numeros[i] < menor){
           menor = numeros[i];
       }
    //    printf("O maior valor: %d, menor valor: %d \n", maior, menor);
    }
    printf("O maior valor: %d, menor valor: %d \n", maior, menor);
    return 0;
}