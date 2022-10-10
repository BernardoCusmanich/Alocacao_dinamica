#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **m, i, c, l;

    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);

    m = (int **)malloc(l * sizeof(int *));

    for (i = 0; i < l; i++)
    {
        m[i] = (int *)malloc(c * sizeof(int));
    }

    for (i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < l; i++)
    {
        free(m[i]);
    }

    free(m);

    return 0;
}