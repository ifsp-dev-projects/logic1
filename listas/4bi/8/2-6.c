#include <stdio.h>

int calcularFibonacci(int num) {
    if (num <= 1) {
        return num;
    }
    return calcularFibonacci(num - 1) + calcularFibonacci(num - 2);
}

int main() {
    int termos;

    printf("Digite a quantidade de termos da sequência de Fibonacci: ");
    scanf("%d", &termos);

    printf("Sequência de Fibonacci até o %dº termo:\n", termos);
    for (int i = 0; i < termos; i++) {
        printf("%d ", calcularFibonacci(i));
    }
    printf("\n");

    return 0;
}
