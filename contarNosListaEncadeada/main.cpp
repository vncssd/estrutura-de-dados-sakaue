#include <stdlib.h>


struct no {
    int val;
    no *prox;
};

typedef no No;

int contarNos(No* lst) {
    int contador = 0;
    No *atual = lst;

    while (atual != NULL) {
        contador++;
        atual = atual->prox;
    }
    return contador;
}

int main() {

    return 0;
}
