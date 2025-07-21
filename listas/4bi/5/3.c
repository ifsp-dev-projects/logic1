#include <stdio.h>

int fact(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

void bubbleSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int A[12], B[12];

    for (int i = 0; i < 12; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 12; i++) {
        B[i] = fact(A[i]);
    }

    bubbleSort(B, 12);

    for (int i = 0; i < 12; i++) {
        printf("%d ", B[i]);
    }

    printf("\n");

    return 0;
}
