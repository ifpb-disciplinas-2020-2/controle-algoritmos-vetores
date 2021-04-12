/*
Escreva um programa em linguagem C que leia dois vetores de cinco números inteiros,
 calcule e imprima a soma dos vetores
 vetor1          = 18, 17, 18, 20, 21
 vetor2          = 12, 11, 81, 10, 22
 vetorResultante = 30, 28, 99, 30, 43
*/
#include <stdio.h>
int main(){
    const int TAM =5;
    int primeiroVetor[TAM];
    int segundoVetor[TAM];
    int resposta[TAM];
     //lendo o primeiro vetor
    for (int i=0; i<TAM; i++){
        printf("Digite um número: ");
        scanf("%d", &primeiroVetor[i]);
    }
    //lendo o segundo vetor
    for (int i=0; i<TAM; i++){
        printf("Digite um número: ");
        scanf("%d", &segundoVetor[i]);
    }
    //calculando e imprindo a soma
    for (int i=0; i<TAM; i++){
        resposta[i] = primeiroVetor[i] + segundoVetor[i];
        printf("%d \n", resposta[i]);
    }
     //lendo o primeiro vetor
    // for (int i=0; i < TAM; i++){
    //     printf("Digite dois números: ");
    //     scanf("%d %d", &primeiroVetor[i], &segundoVetor[i]);
    //     resposta[i] = primeiroVetor[i] + segundoVetor[i];
    //     // printf("%d \n", resposta[i]);
    // }
    //  for (int i=0; i < TAM; i++){
    //     printf("%d \n", resposta[i]);
    // }
    return 0;
}