#include <stdio.h>

struct pessoa{
    int idade;
    float altura;
};

typedef struct pessoa Pessoa;

int main(void) {

    Pessoa p;
    p.altura = 1.54;
    p.idade = 15;

    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f", p.altura);

    return 0;

}
