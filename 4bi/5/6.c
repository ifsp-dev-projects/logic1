#include <stdio.h>

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int findNumber(int array[], int size, int target)
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
    int A[30], B[30], C[60], searchValue, position;

    printf("Digite 30 elementos para A:\n");
    for (int i = 0; i < 30; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 30; i++)
    {
        B[i] = A[i] * A[i] * A[i];
    }

    for (int i = 0; i < 30; i++)
    {
        C[i] = A[i];
    }
    for (int i = 0; i < 30; i++)
    {
        C[30 + i] = B[i];
    }

    bubbleSort(C, 60);

    printf("Digite o número que deseja pesquisar em C: ");
    scanf("%d", &searchValue);

    position = findNumber(C, 60, searchValue);
    if (position != -1)
    {
        printf("O número %d foi encontrado na posição %d em C.\n", searchValue, position);
    }
    else
    {
        printf("O número %d não foi encontrado em C.\n", searchValue);
    }

    return 0;
}
