#include <stdlib.h>

struct no {
    int val;
    no *prox;
};

typedef no No;

int buscar(No* lst, int valor) {
    No *atual = lst;

    while (atual != NULL) {
        if (atual ->val == valor) {
            return 1;
        }
        atual = atual->prox;
    }
    return 0;
}

int main() {

    return 0;
}
