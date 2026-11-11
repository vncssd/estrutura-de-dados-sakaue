#include <stdio.h>

struct ramo {
    int val;
    struct ramo *esq;
    struct ramo *dir;
};

typedef struct ramo Ramo;

void insere(Ramo arvore, int valor) {

}

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
