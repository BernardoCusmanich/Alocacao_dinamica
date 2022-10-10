#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i, n, soma = 0;

    p = malloc(2);

    for (i = 0; i < 2; i++)
    {
        printf("Digite o elemento %d: ");
        scanf("%d", &p[i]);

        soma += p[i];
    }

    p = realloc(p, 3);

    for (i = 0; i < 3; i++)
    {
        printf("Digite o elemento %d: ");
        scanf("%d", &p[i]);

        soma += p[i];
    }

    printf("Soma: %d\n", soma);

    free(p);
    system("pause");
    return 0;
}