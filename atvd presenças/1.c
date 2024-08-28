#include <stdio.h>
#include <stdlib.h>
int main() {
    char nome[61];
    float sl, ida = 0, nvs = 0;
    printf("Digite o seu nome: ");
    scanf("%s", nome); 
    printf("Digite o salario atual: ");
    scanf("%f", &sl);
    if (sl > 0 && sl <= 500) {
        ida = sl * 0.15;
    }
    else if (sl >= 501 && sl <= 700) {
        ida = sl * 0.12;
    }
    else if (sl >= 701 && sl <= 1000) {
        ida = sl * 0.10;
    }
    else if (sl >= 1001 && sl <= 1800) {
        ida = sl * 0.07;
    }
    else if (sl >= 1801 && sl <= 2500) {
        ida = sl * 0.04;
    }
    else if (sl >= 2500) {
        ida = 0;
    }
    else {
        printf("Por favor, digite um valor valido\n");
        return 1; 
    }
    nvs = sl + ida;
    printf("\nNome do usuario: %s\n", nome);
    printf("Percentual de aumento: %.2f%%\n", (ida / sl) * 100);
    printf("Salario atual: R$%.2f\n", sl);
    printf("Novo salario: R$%.2f\n", nvs);
    system("pause");
    return 0;
}
