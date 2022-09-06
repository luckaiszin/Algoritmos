#include <stdio.h>
#include <stdlib.h>

typedef struct elemento elemento;

struct elemento
{

    int num;
    struct elemento *prox;
};

elemento *criar_elemento()
{

    elemento *novo = (elemento *)malloc(sizeof(elemento));

    return novo;
}

elemento *inserir_no_inicio(elemento *Lista, int chave)
{

    /////Seja X um novo elemento
    elemento *x = criar_elemento();
    x->num = chave;

    if (Lista == NULL)
    {
        Lista = x;
        x->prox = NULL;
    }
    else
    {
        x->prox = Lista;
        Lista = x;
    }

    return Lista;
}

void imprimir_lista(elemento *Lista)
{

    ////Seja aux um novo elemento
    elemento *aux = Lista;
    while (aux != NULL)
    {
        printf("%d\n", aux->num);
        aux = aux->prox;
    }
}

int main()
{

    elemento *Lista = NULL; //////Lista vazia

    Lista = inserir_no_inicio(Lista, 3);
    Lista = inserir_no_inicio(Lista, 7);
    Lista = inserir_no_inicio(Lista, 9);
    imprimir_lista(Lista);

    return 0;
}
