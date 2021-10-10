//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int num[10], i = 0, j = 0, aux;

    printf("\n\n-=-=-=-=- Informe 10 numeros -=-=-=-=-\n");

    for (i = 0; i < 10; i++)
    {

        printf("%i - ", i + 1);

        scanf("%d", &num[i]);
    }

    printf("\n\n-=-=-=-=- Numeros Repetidos -=-=-=-=-\n");

    for (i = 0; i < 10; i++)
    {

        for (j = i + 1; j < 10; j++)
        {

            if (num[j] == num[i])
            {

                aux = num[i];

                printf("%d\n", aux);
            }
        }
    }

    printf("\n");

    return 0;
}