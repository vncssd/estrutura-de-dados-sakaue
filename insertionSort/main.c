#include <stdio.h>

void ordenar(int arr[], int tamanho) {
    for (int i=1; i < tamanho; i++) {
        int temp = arr[i];
        int j = i;
        while (j > 0 && arr[j] < arr[j-1]) {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = temp;
    }
}

int main(void) {
    int numeros[10] = {10,9,8,7,6,5,4,3,2,1};

    ordenar(numeros, 10);

    for (int i = 0; i<10; i++) {
        printf("%d", numeros[i]);
    }''
}
