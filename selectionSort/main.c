#include <stdio.h>

void ordenar(int vect[], int tamanho) {

    while (tamanho > 1) {

        int maior = 0;

        for (int j=tamanho-1; j>=0; j--) {
            if (vect[j]>vect[maior]) {
                maior = j;
            }
        }
        tamanho--;

        int aux = vect[tamanho];
        vect[tamanho] = vect[maior];
        vect[maior] = aux;

    }

}

int main(void) {

    int valores[10] = {7,4,5,9,2,1,3,6,8,0};

    ordenar(valores, 10);

    for (int i=0; i<10; i++) {
        printf("%d", valores[i]);
    }

}
