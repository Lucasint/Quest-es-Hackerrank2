#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {

    int n , j, i, sum = 0, a;
// Informa o valor de n e de j
    scanf("%d%d",&n,&j);
    int vetor[n];
// Informa os valores que tem no vetor que vale n
    for(i = 0;i < n; i++) {
        scanf("%d",&vetor[i]);
    }
// Informa o valor de j
    scanf("%d",&a);
// Verifica se j é diferente de i e colocando valor na variavel sum
    for(i = 0; i < n; i++){
        if(i != j){
            sum = sum + vetor[i];
        }
    }
// sum vai ser igual a sum dividido por 2
    sum = sum / 2;
// se sum for igual a variavel a ele imprimi "Bon Appetit"
    if(sum == a){
        printf("Bon Appetit");
    }
// se não, sum vai ser igual a - sum e imprimir a variavel sum
    else {
        sum = a - sum;
        printf("%d", sum);
    }
    return 0;
}
