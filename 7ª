 7. Considere um vetor de 10 elementos, contendo valores inteiros. Faça um pro-
grama que leia os valores para preencher esse vetor, após a leitura o programa
deve invocar uma função que calcule e devolva as frequências absoluta e relativa
desses valores no conjunto. (Observação: a frequência absoluta de um valor é
o número de vezes que esse valor aparece no conjunto de dados; a frequência
relativa é a frequência absoluta dividida pelo número total de dados.). Utilize
outros dois vetores para armazenar as frequências relativas e absolutas e ao final
do programa, imprima de forma tabulada os números e suas frequências absoluta
e relativa.
 #include <stdio.h>
 #include <stdlib.h>

 void freq(int *vet, int tam, int *pabs, float *rel){
     int i, j, x, aux;
     //dados 
     for (i=0; i<tam; i++){
         for (j=i+1; j<tam; j++){
             if (vet[i] > vet [j]){
                 aux = vet[i];
                 vet[i] = vet[j];
                 vet[j]= aux;
             }
         }
     }
     //frenquecias
     for (i=0;i<tam;i++) {
         pabs[i] = 1;
         for (j=i+1;  j<tam ; j++){
             if (vet [i]== vet [j])
             pabs[i]++;
             else {
                 if (pabs[i] > 1){
                     for (x = i+1; x <(i +pabs[i]); x++){
                         pabs[x] = pabs [i];
                         rel[x] =(float)pabs[i] /tam;
                     }
                 }
                 break;
             }
         }
         rel[i] = (float)pabs[i] / tam;
         i += pabs[i] -1 ;   
        }   
    }
    int main()
	{
        int vetNum [10] , i, frenqabs[10];
        float freqrel [10];
        
        for(i=0; i<10;i++){
            printf ("Digite o valor inteiro  : %d\n", i+1);
            scanf("%d" , &vetNum[i]);
        }
        freq(vetNum, 10, frenqabs, freqrel);
        printf("Os dados\nNumero\tFreq abs\tFreq rela\n");
        for (i=0 ; i<10;i++){
            printf("%d\t%d\t\t%f\n" , vetNum[i], frenqabs[i], freqrel[i]);
        }
    }*/
