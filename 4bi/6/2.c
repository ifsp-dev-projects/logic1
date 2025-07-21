#include <stdio.h>

int main() {
    int vetor1[7], vetor2[7], matrizResultado[7][2];
    int i;

    for (i = 0; i < 7; i++) {
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < 7; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 7; i++) {
        matrizResultado[i][0] = vetor1[i];
        matrizResultado[i][1] = vetor2[i];
    }

    for (i = 0; i < 7; i++) {
        printf("%d %d\n", matrizResultado[i][0], matrizResultado[i][1]);
    }

    return 0;
}
