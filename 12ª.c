#include <stdio.>
#include<stdlib.h>
struct Num{

    int num1, num2;
};

int main(){

    struct Num num; int operacao, resultado = 0;

    printf("\n**********************Escolha a operação matematica: (0)-SOMA (1)-SUBTRAÇÃO (2)-DIVISÃO (3)-MULTIPLICAÇÃO******************\n-----> ");
    scanf("%d", &operacao);
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num.num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &num.num2);

    if(operacao == 0){
        resultado = num.num1 + num.num2;

    }else if(operacao == 1){
        resultado = num.num1 - num.num2;

    }else if(operacao == 2){
        resultado = num.num1 / num.num2;

    }else if(operacao == 3){
        resultado = num.num1 * num.num2;

    }

    printf("\nRESULTADO = %d", resultado);
    
    return 0;
}
