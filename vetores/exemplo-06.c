/*
Escreva um programa em linguagem C que leia dez números inteiros e, após finalizar a leitura, 
imprima todos os números lidos na ordem inversa em que eles foram digitados
*/
#include <stdio.h>
#define TAM 10
int main(){
    int numeros[TAM];
    for(int i=0; i < TAM; i++){
        printf("Digite um número: ");
        scanf("%d", &numeros[i]); // i=0 -> 18; i=1 -> 17 ... i=9 -> 32
    }
    for(int i=TAM-1; i >= 0; i--){ // 9, 8, 7, 6, 5, .., 0
        printf("%d\n", numeros[i]);
    }
    // for(int i=1; i <= TAM; i++){ // 1, 2, 3, ..., 10
    //     printf("%d\n", numeros[TAM-i]); // 10-1 [9]; 10-2 [8]; ...10-10 [0]
    // }
    return 0;
}