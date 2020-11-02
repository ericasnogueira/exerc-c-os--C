#include <stdio.h>
#include <stdlib.h>

 void main()
 {
 //declaracao das variaveis
 float pesoTerra, pesoPlaneta;
 int numPlaneta;
 //leitura do peso na terra e escolha do planeta
 printf("Informe o peso na terra:\n");
 scanf("%f", &pesoTerra);
printf("Informe o numero do planeta conforme a tabela: \n");
 printf("1-Mercurio\t 2-Venus\t 3-Marte\n");
printf("4-Jupiter\t 5-Saturno\t 6-Urano\n");
 scanf("%d", &numPlaneta);

 //switch responsavel pela escolha do calculo
 switch (numPlaneta) {
 case 1:
     pesoPlaneta = (pesoTerra / 10) * 0.37;
     break;
 case 2:
     pesoPlaneta = (pesoTerra / 10) * 0.88;
     break;
 case 3:
     pesoPlaneta = (pesoTerra / 10) * 0.38;
     break;
 case 4:
     pesoPlaneta = (pesoTerra / 10) * 2.64;
     break;
 case 5:
     pesoPlaneta = (pesoTerra / 10) * 1.15;
     break;
 case 6:
     pesoPlaneta = (pesoTerra / 10) * 1.17;
     break;
 default:
     printf("Planeta invalido!\n");
 }
 //impressao do peso no planeta escolhido
 printf("Peso no planeta escolhido: %f \n", pesoPlaneta);
 }
