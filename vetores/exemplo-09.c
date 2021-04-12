/*
Escreva um programa em linguagem C que leia um vetor de dez números inteiros e, após terminar a leitura, 
leia um número inteiro N e imprima todos os elementos do vetor que são maiores que N.
*/
#include <stdio.h>
int main(){
    const int TAM =10; //{18, 17, 25, 32, 28}
    int numeros[TAM];
    for(int i=0; i<TAM; i++){
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }
    int numero;
    int count=0;
    printf("Digite um número (N): ");
    scanf("%d", &numero);
    for(int i =0; i<TAM; i++){
        if(numeros[i] > numero){
            // printf("%d\n", numeros[i]);
            count ++;
        }
    }
    printf("Quantidade: %d\n", count);
    return 0;
}