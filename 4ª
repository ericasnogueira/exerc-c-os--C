4. Elabore um programa que leia um valor do tipo inteiro e, por meio de função,
atualize todas as posições de um vetor com o número inteiro lido, depois imprima
os valores. Utilize ponteiros para as operações.
 #include <stdio.h>
 #include <stdlib.h>

 int atualiza(int *vet, int num, int tam) {
 	int i, *pnum;
 	for (i=0; i<tam; i++) {
 		pnum = &vet[i];
 		*pnum = num;
 	}
 }

 int main() {
 	int i, numeros[10], num, *pnumero;
 	printf("Informe o numero: \n");
 	scanf("%d", &num);
 	
 	atualiza(numeros, num, 10);

 	for (i=0; i<10; i++) {
 		pnumero = &numeros[i];
 		printf("Numero: %d \n", *pnumero);
 	}
 }
