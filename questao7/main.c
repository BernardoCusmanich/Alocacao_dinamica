#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **m, **m2, **m3, i, c, l, c2, l2, pl, pc;

    printf("Digite o numero de linhas da primeira matriz: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas da primeira matriz: ");
    scanf("%d", &c);

    printf("Digite o numero de linhas da segunda matriz: ");
    scanf("%d", &l2);
    printf("Digite o numero de colunas da segunda matriz: ");
    scanf("%d", &c2);

    m = (int **)malloc(l * sizeof(int *));
    m2 = (int **)malloc(l2 * sizeof(int *));
    m3 = (int **)malloc(l * sizeof(int *));

    for (i = 0; i < l; i++)
    {
        m[i] = (int *)malloc(c * sizeof(int));
        m3[i] = (int *)malloc(c * sizeof(int));
    }

    for (i = 0; i < l2; i++)
    {
        m2[i] = (int *)malloc(c2 * sizeof(int));
    }

    for (i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < l2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
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

    for (i = 0; i < l2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m3[i][j] = m[i][j] + m2[i][j];
        }
    }

    for (i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < l; i++)
    {
        free(m[i]);
        free(m3[i]);
    }

    free(m);

    return 0;
}