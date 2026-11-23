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

Ramo **buscar(Ramo **arvore, int valor) {
    if (*arvore == NULL || (*arvore)->val == valor) {
        return arvore;
    }
    if (valor < (*arvore)->val) {
        return buscar(&(*arvore)->esq, valor);
    }
    return buscar(&(*arvore)->dir, valor);
}


Ramo *removerRaiz(Ramo **raiz) {

    Ramo *paiMaiorEsquerdo;
    Ramo *maiorEsquerdo;

    if ((*raiz)->esq == NULL) {
        Ramo *filhoDireito = (*raiz)->dir;
        free(*raiz);
        return filhoDireito;
    }

    paiMaiorEsquerdo = *raiz;
    maiorEsquerdo = paiMaiorEsquerdo->esq;

    while (maiorEsquerdo->dir != NULL) {
        paiMaiorEsquerdo = maiorEsquerdo;
        maiorEsquerdo = maiorEsquerdo->dir;
    }

    if (paiMaiorEsquerdo != *raiz) {
        paiMaiorEsquerdo->dir = maiorEsquerdo->esq;
        maiorEsquerdo->esq = (*raiz)->esq;
    }

    maiorEsquerdo->dir = (*raiz)->dir;

    free(*raiz);

    return maiorEsquerdo;
}



void buscarRemover(Ramo **arvore, int valor) {

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
            buscarRemover(&(*arvore)->dir, prox->val);
            return;
        }

    }

    if (valor < (*arvore)->val) {
        buscarRemover(&(*arvore)->esq, valor);
    }
    if (valor > (*arvore)->val) {
        buscarRemover(&(*arvore)->dir, valor);
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

    raiz = removerRaiz(&raiz);
    printf("Removeu 50: ");
    imprimirEmOrdem(&raiz);
    printf("\n");
    printf("=========================================\n");

    raiz = removerRaiz(&raiz);
    printf("Removeu 40: ");
    imprimirEmOrdem(&raiz);
    printf("\n");
    printf("=========================================\n");

    Ramo *alvo = buscar(&raiz,20);
    raiz = removerRaiz(&alvo);
    printf("Removeu 80: ");
    imprimirEmOrdem(&raiz);
    printf("\n");
    printf("=========================================\n");

    return 0;
}
