//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int i;

    printf("\n\n-=-=-=-=- For -=-=-=-=-\n");

    for (i = 1; i <= 100; i++)
    {
        printf("- %d \n", i);
    }

    printf("\n\n-=-=-=-=- While -=-=-=-=-\n");
    i = 1;

    while (i <= 100)
    {
        printf("- %d \n", i++);
    }

    printf("\n\n-=-=-=-=- Do While -=-=-=-=-\n");
    i = 1;

    do
    {
        printf("- %d \n", i++);
    } while (i <= 100);

    return 0;
}