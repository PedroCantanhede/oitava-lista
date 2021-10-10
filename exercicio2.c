//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    float diasTrabalhados, valorFinal, desconto, dia = 30;

    printf("Informe o numero de dias trabalhados: ");
    scanf("%f", &diasTrabalhados);

    valorFinal = diasTrabalhados * dia;
    desconto = valorFinal * 8 / 100;
    valorFinal = valorFinal - desconto;

    printf("\n\n-=-=-=- Dados Empresa -=-=-=- \n\n");
    printf("- Dias Trabalhados: %.f \n- Quantia Liquida a Pagar: R$ %.2f\n- Desconto R$ %.2f\n\n", diasTrabalhados, valorFinal, desconto);

    return 0;
}