#include <stdio.h>
#include <stdlib.h>

struct no{
    int val;
    struct no *prox;
};

typedef struct no No;

void inserirInicio(No *cabeca, int valor) {

    No *novo = malloc(sizeof(No));
    novo->val = valor;
    novo->prox = cabeca->prox;
    cabeca->prox = novo;

}

void inserirNoFim(No *cabeca, int valor) {
    
    No *atual = cabeca;

    while (atual->prox != NULL) {
        atual = atual->prox;
    }

    No *novo = malloc(sizeof(No));
    novo-> val = valor;
    novo->prox = NULL;
    atual->prox = novo;
}

int main(void) {

    No *cabeca = malloc(sizeof(No));

    inserirInicio(cabeca, 10);

    return 0;
}
