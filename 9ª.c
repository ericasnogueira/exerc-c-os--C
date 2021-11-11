#include <stdio.>
#include<stdlib.h>

int main(){
    
    int vetor[50] = {0}, i;

    for(i = 0; i < 50; i++){
     
        printf("Ponteiro: %p, Valor do Vetor %i.\n", &vetor[i], vetor[i]);

    }

  return 0;
}
