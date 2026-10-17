#include <stdio.h>

void main (void)
    {
    int Num1, Num2, Num3, Resultado;

    printf("Informe o primeiro numero: \n");
    scanf("%i", &Num1);
    printf("Informe o segundo numero: \n");
    scanf ("%i", &Num2);
    printf("Informe o terceiro numero: \n");
    scanf ("%i", &Num3);
    Resultado = Num1 * Num2 * Num3;
    printf("O resultado da multiplicacao dos tres numeros e': %i\n", Resultado);
    system("pause");
    }
