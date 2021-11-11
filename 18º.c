#include <stdio.h>
#include <stdlib.h>

struct info
{
    int total;
};
typedef struct info Info;

struct arvore
{
    Info dados;
    struct arvore *esq;
    struct arvore *dir;
};
typedef struct arvore Arv;

Info gerar(int dados)
{
    Info elemento;
    elemento.total = dados;
    return elemento;
}

Arv *inserir(Arv *base, Info dados)
{
    if (base == NULL)
    {
        Arv *aux = (Arv *)malloc(sizeof(Arv));
        aux->dados = dados;
        aux->esq = NULL;
        aux->dir = NULL;
        return aux;
    }
    else
    {
        if (dados.total > base->dados.total)
        {
            base->dir = inserir(base->dir, dados);
        }
        else
        {
            base->esq = inserir(base->esq, dados);
        }
    }
    return base;
}

void voltar(Arv *inv)
{
    if (inv != NULL)
    {
        Arv *aux;
        voltar(inv->esq);
        voltar(inv->dir);
        
        aux = inv->esq;
        inv->esq = inv->dir;
        inv->dir = aux;
    }
    else
        return;
}

void publicar(Arv *base)
{
    if (base != NULL)
    {
        printf("%d ", base->dados.total);
        publicar(base->esq);
        publicar(base->dir);
    }
}

int main()
{
    Arv *base = NULL;
    base = inserir(base, gerar(8));
    base = inserir(base, gerar(4));
    base = inserir(base, gerar(2));
    base = inserir(base, gerar(6));
    base = inserir(base, gerar(1));
    base = inserir(base, gerar(3));
    base = inserir(base, gerar(5));
    base = inserir(base, gerar(7));
    base = inserir(base, gerar(12));
    base = inserir(base, gerar(10));
    base = inserir(base, gerar(9));
    base = inserir(base, gerar(11));
    base = inserir(base, gerar(14));
    base = inserir(base, gerar(13));
    base = inserir(base, gerar(15));
    

    printf("Impressao\n");
    publicar(base);
    printf("\n\n");
    return 0;
}
