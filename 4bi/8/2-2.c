#include <stdio.h>

void leituraMatrizA(int A[]) {
    for (int i = 0; i < 30; i++) {
        scanf("%d", &A[i]);
    }
}

void leituraMatrizB(int B[]) {
    for (int i = 0; i < 30; i++) {
        scanf("%d", &B[i]);
    }
}

void juntarMatrizes(int A[], int B[], int C[]) {
    for (int i = 0; i < 30; i++) {
        C[i] = A[i];
        C[i + 30] = B[i];
    }
}

void exibirMatrizC(int C[]) {
    for (int i = 0; i < 60; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
}

int main() {
    int A[30], B[30], C[60];

    leituraMatrizA(A);
    leituraMatrizB(B);
    juntarMatrizes(A, B, C);
    exibirMatrizC(C);

    return 0;
}
