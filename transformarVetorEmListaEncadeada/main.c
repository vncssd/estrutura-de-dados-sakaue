#include <stdio.h>
#include <stdlib.h>

struct no {
    int val;
    struct no *prox;
};

typedef struct no No;

No* converter(int vect[], int size) {

    No *ultimo = NULL;

    for (int i = size-1; i>=0; i--) {
        No *novo = malloc(sizeof(No));
        novo->val = vect[i];
        novo->prox = ultimo;
        ultimo = novo;
    }

    No *cabeca = ultimo;
    return cabeca;

}

int main(void) {

    return 0;
}
