#include <stdio.>
#include<stdlib.h>
int main()
{
    int matriz[70][50];
    int coluna;
    int linha;
     //PREENCHIMENTO DA MATRIZ
    for(linha =0;linha<70;linha++)
    {
        for(coluna=0;coluna<50;coluna++)
        {
            if(linha == coluna)matriz[linha][coluna]=1; 
			//Diagonal principal
            else matriz[linha][coluna] = 0;
        }
     }
   
   
    //PRINT DA MATRIZ
    for(linha=0;linha<70;linha++)
    {
        for(coluna= 0;coluna<50;coluna++)
        {
            printf("[%d] ", matriz[linha][coluna]);
        }
        printf("\n");
    }
  

    return 0;
}
