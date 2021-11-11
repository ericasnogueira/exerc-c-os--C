#include <stdio.>
#include<stdlib.h>

int main(){
  float A[100][100];
  int  i, j, cont;
  float somapar, somaimpar;
  float media;
  somaimpar = 0;
  somapar = 0;
  cont = 0;
  or(i = 0; i < 100; i++) {
    for(j = 0; j < 100; j++) {
      if (j % 2 == 0) {
        somapar += matriz[i][j];
        cont += 1;

      }
      else {
        printf("%f", matriz[i][j]);
      }
    }
  }
  
  media = somaimpar/cont;

  printf("\nA soma dos valores das colunas impares é: %f", somaimpar);

  return;


}
