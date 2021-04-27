/*
Escreva um programa em linguagem C que leia um vetor de dez números inteiros e, após terminar a leitura, 
leia um número inteiro N e imprima se o número N pertence ao vetor.
vetor = [18 17 23 32 25 29 10 16 45 9]
n = 45
sim
*/
#include <stdio.h>
#define TAM 10
int main(){
    int numeros[TAM];
    int n;
    int quantidade =0;
    for(int i=0; i < TAM; i++){
        printf("Digite o número (%d): ", (i+1));
        scanf("%d", &numeros[i]);
    }
    printf("Digite um número que deseja localizar no vetor: ");
    scanf("%d", &n);
    for(int j=0; j < TAM; j++){
        if(n==numeros[j]) quantidade ++;
    }
    if(quantidade >=1){ // verificando se o número n apareceu, ao menos, uma vez no vetor
        printf("Encontramos o número: %d\n", n);
    }else{
        printf("Não encontramos o número: %d\n", n);
    }

    return 0;
}