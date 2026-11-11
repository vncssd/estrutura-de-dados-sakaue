#include <stdlib.h>
#include <stdio.h>

struct ponto {
    float x;
    float y;
};

typedef struct ponto Ponto;

int main() {

    Ponto *p = (Ponto*) malloc(sizeof(Ponto));

    p->x = 1.0;
    p->y = 6.0;

    printf("ponto: (%f,%f)",p->x, p->y);

    return 0;
}
