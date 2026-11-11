#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct no {
    char link[45];
    struct no *prox;
};

typedef struct no No;

void insereLink(No *p, char *linkAcessado) {
    No *nova;
    nova = malloc(sizeof(No));
    strcpy(nova->link, linkAcessado);
    nova->prox = p->prox;
    p->prox = nova;
}

void apagaHistorico(No *p) {

    if (p->prox == NULL) {
        return;
    }

    No *atual = p->prox;
    No *liberar = p->prox;

    while (atual != NULL) {
        atual = atual->prox;
        free(liberar);
        liberar = atual;
    }

    p->prox = NULL;
}

void printarHistorico(No *p) {

    No *atual = p->prox;

    while (atual != NULL) {
        printf("%s\n", atual->link);
        atual = atual->prox;
    }

}

No* consultarUltimo(No *p) {

    No *topoPilha = p->prox;

    return topoPilha;

}

char* removerUltimo(No *p){

    No* lixo = p->prox;
    char* apagadoConteudo = malloc(strlen(lixo->link) + 1);
    strcpy(apagadoConteudo, lixo->link);

    p->prox = lixo->prox;

    free(lixo);

    return apagadoConteudo;
}


int main(void) {
    No *topo;
    topo = malloc(sizeof(No));
    char *link1 = "youtube.com";
    insereLink(topo, link1);
    char *link2 = "google.com";
    insereLink(topo, link2);
    char *link3 = "twitter.com";
    insereLink(topo, link3);
    char *link4 = "instagram.com";
    insereLink(topo, link4);

    printarHistorico(topo);

    apagaHistorico(topo);

    printf("---------\n");

    printarHistorico(topo);

    printf("---------\n");

    insereLink(topo, link1);
    insereLink(topo, link2);
    insereLink(topo, link3);
    insereLink(topo, link4);

    printarHistorico(topo);

    printf("---------\n");

    printf("%s\n", consultarUltimo(topo));

    printf("----remover-----\n");

    printf("%s\n", removerUltimo(topo));

    printf("---------\n");

    printarHistorico(topo);

    return 0;
}