#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    char endereco[70];
    int idade;
    char telefone[12]
} Agenda;

Agenda agenda[5];

void cadastrarPessoa(int index) {
    printf("Digite o nome: ");
    scanf(" %[^\n]", agenda[index].nome);
    printf("Digite o endereco: ");
    scanf(" %[^\n]", agenda[index].endereco);
    printf("Digite a idade: ");
    scanf("%d", &agenda[index].idade);
    printf("Digite o telefone: ");
    scanf(" %[^\n]", agenda[index].telefone);
}

void pesquisarIdade(int idade) {
    int encontrado = 0;
    for (int i = 0; i < 5; i++) {
        if (agenda[i].idade == idade) {
            printf("Nome: %s\nEndereço: %s\nTelefone: %s\n", agenda[i].nome, agenda[i].endereco, agenda[i].telefone);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("Nenhuma pessoa encontrada com a idade %d.\n", idade);
    }
}

int compararNome(const void *a, const void *b) {
    return strcmp(((Agenda*)a)->nome, ((Agenda*)b)->nome);
}

void classificarAlfabeticamente() {
    qsort(agenda, 5, sizeof(Agenda), compararNome);
    printf("Agenda classificada alfabeticamente:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s - %d anos\n", agenda[i].nome, agenda[i].idade);
    }
}

void alterarRegistro(int index) {
    printf("Alterando os dados de %s:\n", agenda[index].nome);
    printf("Digite o novo nome: ");
    scanf(" %[^\n]", agenda[index].nome);
    printf("Digite o novo endereco: ");
    scanf(" %[^\n]", agenda[index].endereco);
    printf("Digite a nova idade: ");
    scanf("%d", &agenda[index].idade);
    printf("Digite o novo telefone: ");
    scanf(" %[^\n]", agenda[index].telefone);
}

int main() {
    int opcao, idadePesquisa, indiceAlterar;
    int i;

    // Inicialização da agenda com dados em branco
    for (i = 0; i < 5; i++) {
        strcpy(agenda[i].nome, "");
        strcpy(agenda[i].endereco, "");
        agenda[i].idade = 0;
        strcpy(agenda[i].telefone, "");
    }

    do {
        printf("\nMenu da Agenda:\n");
        printf("1. Cadastro\n");
        printf("2. Pesquisa de registro por idade\n");
        printf("3. Classificação alfabética\n");
        printf("4. Alteração de registro digitado com erro\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                for (i = 0; i < 5; i++) {
                    if (strlen(agenda[i].nome) == 0) {
                        cadastrarPessoa(i);
                        break;
                    }
                }
                break;
            case 2:
                printf("Digite a idade que deseja pesquisar: ");
                scanf("%d", &idadePesquisa);
                pesquisarIdade(idadePesquisa);
                break;
            case 3:
                classificarAlfabeticamente();
                break;
            case 4:
                printf("Digite o índice do registro que deseja alterar (0 a 4): ");
                scanf("%d", &indiceAlterar);
                if (indiceAlterar >= 0 && indiceAlterar < 5 && strlen(agenda[indiceAlterar].nome) > 0) {
                    alterarRegistro(indiceAlterar);
                } else {
                    printf("Índice inválido ou registro não encontrado.\n");
                }
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida, tente novamente.\n");
        }

    } while (opcao != 5);

    return 0;
}
