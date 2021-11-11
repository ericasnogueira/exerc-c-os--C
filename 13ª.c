#include <stdio.h>
int main (){
  int n1, n2, n3;
    printf("\nInsira o primeiro valor: ");
    scanf("%d", &n1);
    printf("\nInsira o segundo valor: ");
    scanf("%d", &n2);
    printf("\nInsira o terceiro valor: ");
    scanf("%d", &n3);
    if(&n1 > &n2 && &n1 > &n3){
        printf("O maior endereco inserido é o primeiro: %d", &n1);
    }
    else if (&n2 > &n1 && &n2 > &n3) {
      printf("O maior endereco inserido é o segundo: %d", &n2);
    }
{
      printf("O maior endereco inserido é o terceiro: %d", &n3);
  }
}
