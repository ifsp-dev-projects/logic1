#include <stdio.h>

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int A[20], B[30], C[50];

    printf("Digite 20 elementos para a matriz A:\n");
    for (int i = 0; i < 20; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDigite 30 elementos para a matriz B:\n");
    for (int i = 0; i < 30; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 20; i++) {
        C[i] = A[i];
    }

    for (int i = 0; i < 30; i++) {
        C[20 + i] = B[i];
    }

    bubbleSort(C, 50);

    printf("\nElementos da matriz C em ordem decrescente:\n");
    for (int i = 0; i < 50; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
