//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char str[3], sigla[3];
    int i, siglaNumerico = 0, validador, tamanho;

    do
    {
        validador = 0;
        siglaNumerico = 0;

        printf("\n-=-=-=-=- Informe a sigla do dia na semana -=-=-=-=-\n");
        printf("- Seg\n- Ter\n- Qua\n- Qui\n- Sex\n- Sab\n- Dom\n\n sigla: ");
        gets(sigla);

        tamanho = strlen(sigla);

        if (tamanho == 3)
        {
            for (i = 0; i < tamanho; i++)
                sigla[i] = tolower(sigla[i]);

            for (i = 0; i < tamanho; i++)
                siglaNumerico = siglaNumerico + sigla[i] - 'a';
        }

        switch (siglaNumerico)
        {
        case 28:
            printf("\n- Segunda-Feira\n\n");
            break;
        case 40:
            printf("\n- Terca-Feira\n\n");
            break;
        case 36:
            printf("\n- Quarta-Feira\n\n");
            break;
        case 44:
            printf("\n- Quinta-Feira\n\n");
            break;
        case 45:
            printf("\n- Sexta-Feira\n\n");
            break;
        case 19:
            printf("\n- Sabado\n\n");
            break;
        case 29:
            printf("\n- Domingo\n\n");
            break;
        case 25:
            validador = 0;
            break;

        default:
            printf("\n-=-=-=-=- Informe a sigla corretamente -=-=-=-=-\n");
            printf("- Seg\n- Ter\n- Qua\n- Qui\n- Sex\n- Sab\n- Dom\n\n sigla: ");
            validador = 1;
            break;
        }

    } while (validador);

    return 0;
}