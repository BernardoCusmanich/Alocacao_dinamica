#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i, n, soma = 0;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &p[i]);

        soma += p[i];
    }

    printf("Soma: %d\n", soma);

    free(p);
    system("pause");
    return 0;
}