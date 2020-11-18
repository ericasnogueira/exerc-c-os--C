#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 1000
int main()
{
 setlocale(LC_ALL, "");
 int numeros[TAM];
 int i, aux, contador;
printf("Entre com 1000 numeros para preencher o array, e pressione enter para digitar cada um:\n");
 for (i = 0; i < TAM; i++) {
 scanf("%d", &numeros[i]);
 }
printf("Ordem atual dos itens no array:\n");
for (i = 0; i < TAM; i++) {
 printf("%4d", numeros[i]);
}
// Algoritmo de ordenaÃ§Ã£o Bubblesort:
 for (contador = 1; contador < TAM; contador++) {
   for (i = 0; i < TAM - 1; i++) {
     if (numeros[i] > numeros[i + 1]) {
       aux = numeros[i];
       numeros[i] = numeros[i + 1];
       numeros[i + 1] = aux;
     }
   }
 }
printf("\nElementos do array em ordem crescente:\n");
for (i = 0; i < TAM; i++) {
 printf("%4d", numeros[i]);
}
printf("\n");
return 0;
}
