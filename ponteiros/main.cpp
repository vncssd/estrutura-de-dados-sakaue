#include <stdio.h>

int val = 5;
int *p;


int main() {

    p = &val;
    printf("valor p: %d", *p);

    return 0;
}