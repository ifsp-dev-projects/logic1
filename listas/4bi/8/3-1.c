#include <stdio.h>

int total(int num) {
    int soma = 0;
    for (int i = 1; i <= num; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int valor;

    printf("Digite o valor de N: ");
    scanf("%d", &valor);

    int resultado = total(valor);
    printf("O somatório dos primeiros %d números inteiros é: %d\n", valor, resultado);

    return 0;
}
