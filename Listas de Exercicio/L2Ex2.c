#include <stdio.h>
void main (void)
{
    float Num1, Num2, Result;
    int Escolha;
    char Cont;

    Cont = 'S';

    while(Cont == 'S' || Cont == 's')
    {
    system("cls");
    printf("Insira dois numeros: \n\n");
    scanf("%f %f", &Num1, &Num2);

    system("cls");
    printf("Numero 1: %.2f", Num1);
    printf("\nNumero 2: %.2f", Num2);

    printf("\n\nEscolha uma opcao de operacao:\n");
    printf("\t\t\t\t 1 \t Media entre os numeros digitados\n");
    printf("\t\t\t\t 2 \t Diferenca entre os numeros\n");
    printf("\t\t\t\t 3 \t Produto entre os numeros digitados\n");
    printf("\t\t\t\t 4 \t Divisao Real do primeiro pelo segundo (Quociente - Div)\n\t\t\t\t ");

    scanf("%i", &Escolha);

    if (Escolha == 1)
    {
        Result = (Num1 + Num2) / 2;
        printf("\nMedia entre os numeros: %.2f\n", Result);

    } else if (Escolha == 2)
    {
        Result = (Num1 - Num2);
        printf("\nDiferenca entre os numeros: %.2f\n", Result);

    } else if (Escolha == 3)
    {
        Result = (Num1 * Num2);
        printf("\nProduto entre os numeros: %.2f\n", Result);

    } else if (Escolha == 4)
    {
        Result = (Num1 / Num2);
        printf("\nQuociente da divisao entre os numeros: %.2f\n", Result);

    } else
        printf ("\n\tEscolha invalida!\n\n");

    printf("\nDeseja continuar? [S][N]\n\n\t\t  ");
    scanf(" %c", &Cont);

    }
}
