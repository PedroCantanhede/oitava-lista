//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Ponteiro - aponta a localização do registro existente
    FILE *arq;

    // Declaração das Variáveis
    char binarios[20], aux[20];
    int vetor[50], cont = 0, h = 0, mensgErro = 0, i, j;

    printf("\n-=-=-=-=-=-=-=-=- Numeros Binarios -=-=-=-=-=-=-=-=-\n");
    printf("Informe os numeros a serem convertidos (0 encerra): \n");
    sleep(1);

    while (1)
    {

        printf("[%d] - ", cont + 1);
        scanf("%d", &vetor[cont]);
        if (vetor[cont] == 0)
        {
            break;
        }
        cont++;
    }

    for (i = 0; i < cont; i++)
    {

        while (vetor[i] > 0)
        {
            aux[h] = vetor[i] % 2 + '0';
            vetor[i] = vetor[i] / 2;
            h++;
        }

        for (int i = 0, j = h - 1; i < h; i++, j--)
        {
            binarios[i] = aux[j];
        }

        binarios[h] = '\0';

        strcat(binarios, "\n");

        arq = fopen("binarios.txt", "a");

        if (arq == NULL)
        {
            mensgErro = 1;
            fclose(arq);
            h = 0;
        }
        else
        {
            fputs(binarios, arq);
            fclose(arq);
            h = 0;
        }
    }

    if (mensgErro)
    {
        printf("\n-=-=-=-=-=-=-=-=- Binarios -=-=-=-=-=-=-=-=-\n");
        printf("Erro na Excecucao\n\n");
    }
    else
    {
        printf("\n-=-=-=-=-=-=-=-=- Binarios -=-=-=-=-=-=-=-=-\n");
        printf("Gravado com sucesso!\n\n");
    }

    return 0;
}