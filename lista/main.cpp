#include <stdio.h>
#include <stdlib.h>

struct ponto {
    float x;
    float y;
    struct ponto *prox;
};

typedef struct ponto Ponto;

int main() {

    Ponto *p1 = (Ponto*) malloc(sizeof(Ponto));

    p1->x = 1;
    p1->y = 5;

    Ponto *p2 = (Ponto*) malloc(sizeof(Ponto));

    p2->x = 4;
    p2->y = 6;

    p1->prox = p2;
    p2->prox = NULL;

    return 0;
}
