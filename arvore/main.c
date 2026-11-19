#include <stdio.h>

struct ramo {
    int val;
    struct ramo *esq;
    struct ramo *dir;
};

typedef struct ramo Ramo;

Ramo *buscar(Ramo **arvore, int valor) {

    if (*arvore == NULL) {
        return NULL;
    }

    if ((*arvore)->val == valor) {
        return *arvore;
    }
    if (valor < (*arvore) ->val) {
        return buscar(&(*arvore)->esq, valor);
    }

    return buscar(&(*arvore)->dir, valor);

}

void insere(Ramo **arvore, int valor) {

    if (arvore == NULL) {
        *arvore = malloc(sizeof(Ramo));
        (*arvore)->val = valor;
        (*arvore)->esq = NULL;
        (*arvore)->dir = NULL;
    }

    else {
        if (valor < (*arvore) ->val) {
            insere(&(*arvore)->esq, valor);
        }
        else {
            insere(&(*arvore)->dir, valor);
        }
    }
    
}

void remover(Ramo **arvore, int valor) {

    if (*arvore == NULL) {
        return;
    }

    if ((*arvore)->val == valor) {

        if ((*arvore)->dir == NULL && (*arvore)->esq == NULL) {
            free(*arvore);
            *arvore = NULL;
            return;
        }

        if ((*arvore)->dir == NULL && (*arvore)->esq != NULL) {
            Ramo *removido = *arvore;
            *arvore = (*arvore)->esq;
            free(removido);
            return;
        }

        if ((*arvore)->dir != NULL && (*arvore)->esq == NULL) {
            Ramo *removido = *arvore;
            *arvore = (*arvore)->dir;
            free(removido);
            return;
        }

        if ((*arvore)->dir != NULL && (*arvore)->esq != NULL) {
            Ramo *prox = (*arvore)->dir;
            while (prox->esq != NULL) {
                prox = prox->esq;
            }
            (*arvore)->val = prox->val;
            remover(&(*arvore)->dir, prox->val);
            return;
        }

    }

    if (valor < (*arvore)->val) {
        remover(&(*arvore)->esq, valor);
    }
    if (valor > (*arvore)->val) {
        remover(&(*arvore)->dir, valor);
    }

}

void imprimirEmOrdem(Ramo **arvore) {

    if (*arvore == NULL) {
        return;
    }

    imprimirEmOrdem(&(*arvore)->esq);
    printf("\n%d", (*arvore)->val);
    imprimirEmOrdem(&(*arvore)->dir);

}

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
