#include<stdio.h>
#include<stdlib.h>
 //estrutura
 struct noDaArvore{
     int valor;
     struct noDaArvore* esquerda;
     struct noDaArvore* direita;
     
 };
 // renomeando a estrutura
 typedef struct noDaArvore no;
//declarando as funcoes
 no* inserirNo(int valor, no* esq, no* dir);
 void imprimirPreOrdem(no*n);
 void imprimirEmOrdem(no*n);
 void imprimirPosOrdem(no*n);



 int main(){
     // inserindo(valor, esq, dir)
     no * n =  inserirNo (25, inserirNo(30,NULL,NULL), inserirNo(40, inserirNo(20,NULL,NULL),NULL));

     printf("PRE-ORDEM");       
     imprimirPreOrdem(n);
     printf("\n EM-ORDEM");
     imprimirEmOrdem(n);
     printf("\n POS-ORDEM");
     imprimirPosOrdem(n);
 }

 no* inserirNo(int valor,no* esq, no* dir){

     no* n = (no*) malloc(sizeof(no));

     if (n==NULL){
         exit(1);
     }else{
         
         n->valor       = valor;
         n->esquerda    = esq;
         n->direita     =dir; 
     }
     
     return n;
 }


 void imprimirPreOrdem(no*n){
     if (n !=NULL){
          printf("%i ", n->valor);
          imprimirPreOrdem(n->esquerda);
          imprimirPreOrdem(n->direita);
     }
 }
 void imprimirEmOrdem(no*n){
     if (n !=NULL){
          imprimirEmOrdem(n->esquerda);
          printf("%i ", n->valor);
          imprimirEmOrdem(n->direita);
     }
 }
 void imprimirPosOrdem(no*n){
     if (n !=NULL){
          imprimirPosOrdem(n->esquerda);
          imprimirPosOrdem(n->direita);
          printf("%i ", n->valor);

     }
 }




 
