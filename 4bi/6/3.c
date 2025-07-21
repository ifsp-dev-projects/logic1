#include <stdio.h>

int calcularFatorial(int n) {
    if(n <= 1) {
        return 1;
    }
    return n * calcularFatorial(n - 1);
}

int main() {
    int numeros[10], resultados[10][3];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        resultados[i][0] = numeros[i] + 5;
        resultados[i][1] = calcularFatorial(numeros[i]);
        resultados[i][2] = numeros[i] * numeros[i];
    }

    for (i = 0; i < 10; i++) {
        printf("%d %d %d\n", resultados[i][0], resultados[i][1], resultados[i][2]);
    }

    return 0;
}
