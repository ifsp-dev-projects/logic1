#include <stdio.h>

void ordenarMatriz(int matriz[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (matriz[i] > matriz[j]) {
                temp = matriz[i];
                matriz[i] = matriz[j];
                matriz[j] = temp;
            }
        }
    }
}

int main() {
    int matrizA[12], matrizB[12], matrizC[12];
    
    printf("Digite os 12 elementos da matriz A:\n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &matrizA[i]);
    }
    
    ordenarMatriz(matrizA, 12);

    printf("Digite os 12 elementos da matriz B:\n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &matrizB[i]);
    }

    ordenarMatriz(matrizB, 12);

    for (int i = 0; i < 12; i++) {
        matrizC[i] = matrizA[i] + matrizB[i];
    }

    ordenarMatriz(matrizC, 12);

    printf("Os elementos da matriz C (ordenados) são:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d ", matrizC[i]);
    }
    printf("\n");

    return 0;
}
