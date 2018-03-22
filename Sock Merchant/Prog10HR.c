#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {

    int n, i, count = 0, j;
 // Digita a quantidade de numero que vai ter no vetor
    scanf("%d",&n);
// Variavel vetor vai ter o tamanho de da variavel n
    int vetor[n];
// Esse primeiro laço for vai pegar os valores do vetor
    for(i = 0; i < n; i++){
       scanf("%d", &vetor[i]);
    }
// Nesse laço e na condição vai ver quantos numeros se combinam e na variavel count vai armazenar quantas vezes os numeros combinaram
    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(vetor[i] == vetor[j] && i != j && vetor[i]!=0){
                count++;
                vetor[j] = 0;
                vetor[i] = 0;
            }
        }
    }
// Imprimindo quantas vezes os numeros combinou
    printf("%d",count);
    return 0;
}
