#include <stdio.h>

struct ramo {
    int val;
    struct ramo *esq;
    struct ramo *dir;
};

typedef struct ramo Ramo;

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

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
