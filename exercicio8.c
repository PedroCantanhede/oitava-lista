//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char frase[1000];
    int i = 0, n = 0;

    printf("Informe a frase: ");
    gets(frase);

    for (i; i < strlen(frase); i++)
    {
        if (frase[i] == 32)
        {
            n++;
        }
    }

    printf("\n-=-=-=-=- Caracteres em Branco -=-=-=-=-\n");
    printf("- %d\n\n", n);

    return 0;
}