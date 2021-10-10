//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Ponteiro - aponta a localização do registro existente
    FILE *arq;

    // Declaração das Variáveis
    char produto[200];
    float preco, total = 0.00;

    arq = fopen("loja.txt", "r");

    if (arq == NULL)
    {
        printf("\n-=-=-=-=-=- Erro na abertura do arquivo -=-=-=-=-=-\n\n");
        system("pause");
        exit(1);
    }

    while (!feof(arq))
    {
        fscanf(arq, "%c %f", produto, &preco);
        total = total + preco;
    }

    printf("\n-=-=-=-=-=- Total = R$ %.2f -=-=-=-=-=-\n\n", total);

    return 0;
}