#include <stdio.h>

int calcularPoder(int numero, int potencia) {
    int resultado = 1;
    for (int i = 0; i < potencia; i++) {
        resultado *= numero;
    }
    return resultado;
}

int main() {
    int numero, potencia;

    printf("Digite o número base: ");
    scanf("%d", &numero);
    printf("Digite o valor da potência: ");
    scanf("%d", &potencia);

    int resultado = calcularPoder(numero, potencia);

    printf("O resultado de %d elevado a %d é: %d\n", numero, potencia, resultado);

    return 0;
}
