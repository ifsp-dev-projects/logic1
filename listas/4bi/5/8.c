#include <stdio.h>

void sort(int array[], int leftIndex, int rightIndex)
{
    for (int i = leftIndex; i < rightIndex; i++)
    {
        for (int j = i + 1; j <= rightIndex; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int pesquisa(int array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int notas[40], procurado, posicao;

    printf("Digite as notas de 40 alunos:\n");
    for (int i = 0; i < 40; i++)
    {
        printf("Nota[%d]: ", i);
        scanf("%d", &notas[i]);
    }

    sort(notas, 0, 39);

    printf("Digite a nota que deseja pesquisar: ");
    scanf("%d", &procurado);

    posicao = pesquisa(notas, 40, procurado);
    if (posicao != -1)
    {
        printf("A nota %d foi encontrada na posição %d.\n", procurado, posicao);
    }
    else
    {
        printf("A nota %d não foi encontrada.\n", procurado);
    }

    return 0;
}
