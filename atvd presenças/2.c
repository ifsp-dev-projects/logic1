#include <stdio.h>
#include <stdlib.h>

int main() {
    float soma = 0, maior = -1.0 / 0.0, menor = 1.0 / 0.0; // -inf e inf
    float soma_par = 0, soma_impar = 0;
    int contador = 0, indice_par = 0, indice_impar = 0;
    int pares[1000], impares[1000];  // Arrays para armazenar números inteiros
    int faixas_contagem[5] = {0, 0, 0, 0, 0};
    float faixas_soma[5] = {0, 0, 0, 0, 0};
    char input[50];
    float n;
    
    while (1) {
        printf("Digite um valor qualquer a ser calculado, quando desejar parar e calcular, digite um caractere: ");
        if (scanf("%s", input) != 1) break;

        if (sscanf(input, "%f", &n) != 1) {
            break; // Se o input não for um número, sai do loop
        }

        soma += n;
        contador++;

        if (n < menor) menor = n;
        if (n > maior) maior = n;

        // Verificar se o número é um inteiro antes de verificar paridade
        if ((int)n == n) {  // Verifica se o número é inteiro
            if ((int)n % 2 == 0) {
                pares[indice_par] = (int)n;  // Armazenar como inteiro
                soma_par += (int)n;  // Soma como inteiro
                indice_par++;
            } else {
                impares[indice_impar] = (int)n;  // Armazenar como inteiro
                soma_impar += (int)n;  // Soma como inteiro
                indice_impar++;
            }
        }

        // Faixas
        if (n < 0) {
            faixas_contagem[0]++;
            faixas_soma[0] += n;
        } else if (n < 15) {
            faixas_contagem[1]++;
            faixas_soma[1] += n;
        } else if (n < 100) {
            faixas_contagem[2]++;
            faixas_soma[2] += n;
        } else if (n < 1000) {
            faixas_contagem[4]++;
            faixas_soma[4] += n;
        } else if (n >= 1000) {
            faixas_contagem[3]++;
            faixas_soma[3] += n;
        }
    }

    if (contador > 0) {
        printf("\nA média dos valores inseridos é: %.2f\n", soma / contador);
        printf("O menor valor é: %.2f\n", menor);
        printf("O maior valor é: %.2f\n", maior);

        printf("\nValores pares:");
        if (indice_par == 0) {
            printf(" Nenhum\n");
        } else {
            for (int i = 0; i < indice_par; i++) {
                printf(" %d", pares[i]);
            }
            printf("\nA soma dos valores pares é: %.2f\n", soma_par);
        }

        printf("\nValores ímpares:");
        if (indice_impar == 0) {
            printf(" Nenhum\n");
        } else {
            for (int i = 0; i < indice_impar; i++) {
                printf(" %d", impares[i]);
            }
            printf("\nA soma dos valores ímpares é: %.2f\n", soma_impar);
        }
    } else {
        printf("Nenhum número foi inserido.\n");
    }

    printf("\nDistribuição por faixas:\n");
    for (int i = 0; i < 5; i++) {
        printf("Faixa %d - Total de elementos: %d, Total da faixa: %.2f\n", i + 1, faixas_contagem[i], faixas_soma[i]);
    }

    system("pause");
    return 0;
}
