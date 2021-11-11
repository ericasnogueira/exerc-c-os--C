6. Construa uma função que, recebendo como parâmetros quatro números inteiros,
devolva ao módulo que o chamou os dois maiores números dentre os quatro rece-
bidos. Faça um programa que leia tantos conjuntos de quatro valores quantos o
usuário deseje e que acione a função para cada conjunto de valores, apresentando
a cada vez os dois maiores números. Se preferir, utilize vetor para armazenar o
conjunto de valores.
 #include <stdio.h>
 #include <stdlib.h>

 void obtemMaiores(int *vet, int *pmaior1, int *pmaior2) {
 	int i, j, aux;
 	for (i=0; i<4; i++) {
  		for (j=i+1; j<4; j++) {
			if (vet[i] < vet[j]) {
				aux = vet[i];
 				vet[i] = vet[j];
 				vet[j] = aux;
 			}
 		}
	}
 	*pmaior1 = vet[0];
 	*pmaior2 = vet[1];
 }

 int main() {
 	int vetNum[4], i;
 	int maior1, maior2;

	for (i=0; i<4; i++) {
 		printf("Informe o valor inteiro %d: \n", i+1);
 		scanf("%d", &vetNum[i]);
 	}

 	obtemMaiores(vetNum, &maior1, &maior2);
 	printf("Os dois maiores valores sao: %d e %d \n", maior1, maior2);
 }
