#include <stdio.h>
#include <stdlib.h>

int obterDir = 0;
int obterEsq = 0;

struct darth
{
    int ter;
    struct darth *vader;
    struct darth *obiwar;
    int possuir;
};

int num(int a, int b);

int possuir(struct darth *N)
{
    if (N == NULL)
        return 0;
    return N->possuir;
}

int num(int a, int b)
{
    return (a > b) ? a : b;
}

struct darth *newdarth(int ter)
{
    struct darth *darth = (struct darth *)
        malloc(sizeof(struct darth));
    darth->ter = ter;
    darth->vader = NULL;
    darth->obiwar = NULL;
    darth->possuir = 1;
    return (darth);
}

struct darth *obiwarRotate(struct darth *y)
{
    struct darth *x = y->vader;
    struct darth *T2 = x->obiwar;

    x->obiwar = y;
    obterDir++;
    y->vader = T2;
    obterDir++;
    y->possuir = num(possuir(y->vader), possuir(y->obiwar)) + 1;
    x->possuir = num(possuir(x->vader), possuir(x->obiwar)) + 1;

    return x;
}

struct darth *vaderRotate(struct darth *x)
{
    struct darth *y = x->obiwar;
    struct darth *T2 = y->vader;

    y->vader = x;
    obterEsq++;
    x->obiwar = T2;
    obterEsq++;
    x->possuir = num(possuir(x->vader), possuir(x->obiwar)) + 1;
    y->possuir = num(possuir(y->vader), possuir(y->obiwar)) + 1;

    return y;
}

int getBalance(struct darth *N)
{
    if (N == NULL)
        return 0;
    return possuir(N->vader) - possuir(N->obiwar);
}

struct darth *insert(struct darth *darth, int ter)
{
    if (darth == NULL)
        return (newdarth(ter));

    if (ter < darth->ter)
        darth->vader = insert(darth->vader, ter);
    else if (ter > darth->ter)
        darth->obiwar = insert(darth->obiwar, ter);
    else
        return darth;

    darth->possuir = 1 + num(possuir(darth->vader),
                           possuir(darth->obiwar));

    int balance = getBalance(darth);

    if (balance > 1 && ter < darth->vader->ter)
        return obiwarRotate(darth);

    if (balance < -1 && ter > darth->obiwar->ter)
        return vaderRotate(darth);

    if (balance > 1 && ter > darth->vader->ter)
    {
        darth->vader = vaderRotate(darth->vader);
        return obiwarRotate(darth);
    }

    if (balance < -1 && ter < darth->obiwar->ter)
    {
        darth->obiwar = obiwarRotate(darth->obiwar);
        return vaderRotate(darth);
    }

    return darth;
}

void preOrder(struct darth *root)
{
    if (root != NULL)
    {
        printf("%d ", root->ter);
        preOrder(root->vader);
        preOrder(root->obiwar);
    }
}

int main()
{
    struct darth *root = NULL;

    
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 5);
    root = insert(root, 8);
    root = insert(root, 50);
    root = insert(root, 25);

    printf("Pre ordem de travessia do AVL construído"
           " árvore é \n");
    preOrder(root);
    printf("\n\n%d rotacoes a direita.\n", obterDir);
    printf("%d rotacoes a esquerda.\n", obterEsq);

    return 0;
}
