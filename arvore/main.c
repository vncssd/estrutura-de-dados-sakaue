#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ramo {
    int val;
    struct ramo *esq;
    struct ramo *dir;
};

typedef struct ramo Ramo;



void insere(Ramo **arvore, int valor) {

    if (*arvore == NULL) {
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
    Ramo *raiz = NULL;

    // cria a árvore
    insere(&raiz, 50);
    insere(&raiz, 30);
    insere(&raiz, 70);
    insere(&raiz, 20);
    insere(&raiz, 40);
    insere(&raiz, 60);
    insere(&raiz, 80);

    printf("Inicial:  ");
    imprimirEmOrdem(&raiz);
    printf("\n");
    printf("=========================================\n");

    insere(&raiz, 35);
    printf("Inseriu 35: ");
    imprimirEmOrdem(&raiz);
    printf("\n");
    printf("=========================================\n");

    remover(&raiz, 50);
    printf("Removeu 50: ");
    imprimirEmOrdem(&raiz);
    printf("\n");
    printf("=========================================\n");

    return 0;
}
