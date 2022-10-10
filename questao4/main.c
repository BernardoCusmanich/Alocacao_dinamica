#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **m;

    m = (int **)malloc(sizeof(int *) * 5);

    for (int i = 0; i < 5; i++)
    {
        m[i] = (int *)malloc(sizeof(int) * 5);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        free(m[i]);
    }

    free(m);

    return 0;
}