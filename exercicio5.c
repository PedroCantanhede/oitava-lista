//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int numero, i, j, h;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    printf("\n\n-=-=-=-=- Triangulo Floyd -=-=-=-=-\n");

    for (i = 1; i <= numero; i++)
    {
        for (j = 1; j <= i; j++)
        {
            h++;
            printf("%d ", h);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}