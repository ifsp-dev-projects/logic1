#include <stdio.h>

int busca(int v[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

void sort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
        }
    }
}

int main() {
    int A[8], B[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 8; i++) {
        B[i] = A[i] * 5;
    }

    sort(B, 8);

    for (int i = 0; i < 8; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    int x;
    scanf("%d", &x);
    printf("%d\n", busca(B, 8, x));

    return 0;
}
