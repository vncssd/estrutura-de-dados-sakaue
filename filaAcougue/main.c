#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct no{
    int senha;
    struct no* prox;
};

typedef struct no No;

void inserirComum (int senha, No **pinicial, No **pfinal){
    No *nova = malloc(sizeof(No));
    nova->senha = senha;
    nova->prox = NULL;

    if(*pinicial == NULL){
        (*pinicial) = nova;
    }
    else{

        (*pfinal)->prox = nova;

    }

    *pfinal = nova;

}

int atenderProximo(No **pinicial, No **pfinal){

    if(*pinicial == NULL){
        return 0;
    }

    No *liberar = *pinicial;
    int atendido = (*pinicial)->senha;

    *pinicial = (*pinicial)->prox;

    if(*pinicial == NULL){
        *pfinal = NULL;
    }

    free(liberar);

    return atendido;
}

void printarFila(No *pinicial){

    No* atual = pinicial;

    while(atual != NULL){
        printf("---------------------------\n");
        printf("senha: %d\n", atual->senha);
        printf("---------------------------\n");

        atual = atual->prox;

    }

}

int main()
{
    No* inicio = NULL;
    No* final = NULL;

    printf("=== Inserir comum senha 001 ===\n");
    inserirComum(001, &inicio, &final);

    printarFila(inicio);

    printf("--- inserir varios comuns\n");
    inserirComum(002, &inicio, &final);
    inserirComum(003, &inicio, &final);
    inserirComum(004, &inicio, &final);
    inserirComum(005, &inicio, &final);
    inserirComum(006, &inicio, &final);
    inserirComum(007, &inicio, &final);
    printarFila(inicio);

    printf("--- atendendo 2 clientes (001, 002)\n");
    atenderProximo(&inicio, &final);
    atenderProximo(&inicio, &final);

    printarFila(inicio);

    return 0;

}