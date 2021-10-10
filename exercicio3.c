//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int a, b, c;

    printf("Informe o primeiro lado: ");
    scanf("%d", &a);
    printf("Informe o segundo lado: ");
    scanf("%d", &b);
    printf("Informe o terceiro lado: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("\n\n-=-=-=-=- Lados FORMAM um triangulo! -=-=-=-=-\n");
        if (a == b && a == c)
        {
            printf("- Equilatero\n\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("- Isosceles\n\n");
        }
        else
        {
            printf("- Escaleno\n\n");
        }
    }
    else
    {
        printf("\n\n-=-=-=-=- Lados NAO formam um triangulo! -=-=-=-=-\n\n");
    }

    return 0;
}