//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    float vetor[5];
    int codigo, continua, i;

    printf("\n-=-=-=-=- Informe os valores do vetor -=-=-=-=-\n");

    for (i = 0; i < 5; i++)
    {
        printf("[%d] - ", i + 1);
        scanf("%f", &vetor[i]);
    }

    do
    {
        continua = 0;
        printf("\n-=-=-=-=- Informe o codigo -=-=-=-=-\n");
        printf("\n[0] Encerra o Programa \n[1] Exibe o Vetor na Ordem Direta\n[2] Exibe o Vetor na Ordem Inversa \n");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 0:
            printf("\n-=-=-=-=- Programa Encerrado! -=-=-=-=-\n\n");
            getch();
            break;
        case 1:
            printf("\n\n-=-=-=-=- Vetor -=-=-=-=-\n");
            printf("\nOrdem Direta: ");
            for (i = 0; i < 5; i++)
            {
                printf("%.0f \n\n", vetor[i]);
            }
            break;
        case 2:
            printf("\n\n-=-=-=-=- Vetor -=-=-=-=-\n");
            printf("\nOrdem Inversa: ");
            for (i = 4; i >= 0; i--)
            {
                printf("%.0f \n\n", vetor[i]);
            }
            break;

        default:
            printf("\n\n-=-=-=-=- Codigo Invalido -=-=-=-=-\n");
            printf("\n[0] Encerra o Programa \n[1] Exibe o Vetor na Ordem Direta\n[2] Exibe o Vetor na Ordem Inversa \n");
            continua = 1;
            break;
        }
    } while (continua);

    return 0;
}