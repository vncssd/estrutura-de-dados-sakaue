#include <stdio.h>
#include <stdlib.h>

struct no {
    int val;
    struct no *prox;
};

typedef struct no No;

void add (No *lst, int valor) {

    No *novo = malloc(sizeof(No));
    novo->val = valor;
    novo->prox = NULL;
    No *ultimo = lst;

    while (ultimo->prox != NULL) {
        ultimo = ultimo->prox;
    }

    ultimo->prox = novo;
}

void addAll(No *lst, int vect[], int vectSize) {

    No *ultimoLst = lst;
    No *ultimoArray = NULL;

    while (ultimoLst->prox != NULL) {
        ultimoLst = ultimoLst->prox;
    }

    for (int i=vectSize-1; i>=0; i--) {
        No *novo = malloc(sizeof(No));
        novo->val = vect[i];
        novo->prox = ultimoArray;
        ultimoArray = novo;
    }

    ultimoLst->prox = ultimoArray;

}

No* encontrarAnterior(No* lst, No* alvo) {

    No* p = lst;

    while (p != NULL && p->prox != alvo) {
        p = p->prox;
    }
    return p;
}

void remover(No* lst, No* alvo) {

    No* anteriorAlvo = encontrarAnterior(lst, alvo);

    if (anteriorAlvo == NULL) {
        return;
    }

    anteriorAlvo->prox = alvo->prox;

    free(alvo);

}

void removerUltimo(No* lst) {

    No* ultimo = lst;

    while (ultimo->prox != NULL) {
        ultimo = ultimo->prox;
    }

    remover(lst,ultimo);
}

int somarElementos(No* lst) {

    int total = 0;
    No* ultimo = lst;

    while (ultimo != NULL) {
        total = total + ultimo->val;
        ultimo = ultimo->prox;
    }

    return total;
}

int main(void) {

    

    return 0;
}
