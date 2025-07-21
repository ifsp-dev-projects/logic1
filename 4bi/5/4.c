#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int A[12], B[12], C[12];

    for (int i = 0; i < 12; ++i) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 12; ++i) {
        scanf("%d", &B[i]);
    }

    bubbleSort(A, 12);
    bubbleSort(B, 12);

    for (int i = 0; i < 12; ++i) {
        C[i] = A[i] + B[i];
    }

    bubbleSort(C, 12);

    for (int i = 0; i < 12; ++i) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
