//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    float primeiro, segundo, terceiro, importancia = 780.000;

    primeiro = importancia * 0.46; // 358.800 (46%)
    segundo = importancia * 0.32;  // 249.600 (32%)
    terceiro = importancia * 0.22; // 171.600 (22%)

    printf("\n\n-=-=-=- Quantia ganha pelos jogadores -=-=-=- \n\n");
    printf("1 - O primeiro colocado ficou com: %.3f \n", primeiro);
    printf("2 - O segundo colocado ficou com: %.3f \n", segundo);
    printf("3 - O terceiro colocado ficou com: %.3f \n\n", terceiro);

    return 0;
}