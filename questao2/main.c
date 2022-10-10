#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i, n, soma = 0, media = 0;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    p = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &p[i]);

        soma += p[i];
    }

    media = soma / n;

    printf("media: %d\n", media);

    for (i = 0; i < n; i++)
    {
        if (p[i] > media)
        {
            printf("Eh um valor acima da media: %d\n", p[i]);
        }
    }

    free(p);
    system("pause");
    return 0;
}