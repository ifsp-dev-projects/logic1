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

int search(int array[], int size, int target)
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
    int A[20], B[20], target, pos;

    printf("Digite 20 elementos para A:\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        B[i] = A[i] + 2;
    }

    sort(B, 0, 19);

    printf("Digite o número que deseja pesquisar em B: ");
    scanf("%d", &target);

    pos = search(B, 20, target);
    if (pos != -1)
    {
        printf("O número %d foi encontrado na posição %d de B.\n", target, pos);
    }
    else
    {
        printf("O número %d não foi encontrado em B.\n", target);
    }

    return 0;
}
