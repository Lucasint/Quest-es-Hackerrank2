#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
// Declaram uma variavel long int como pede no problema de numero grande
    long int vetor[5], sum = 0, sum1 = 0;
    int i , j;
// Pegaremos os numeros informados no vetor
    for(i = 0; i < 5; i++) {
        scanf("%ld",&vetor[i]);
    }
// Nesse laço faremos a primeira soma sem o 5º numero
    for(i = 0; i < 4; i++){
        sum = sum + vetor[i];
    }
// Nesse outro laço faremos a segunda soma sem o 1º numero
    for(i = 1; i < 5; i++) {
        sum1 = sum1 + vetor[i];
    }
// Imprimimos o resultados das duas somas
    printf("%ld %ld",sum,sum1);
    return 0;
}
