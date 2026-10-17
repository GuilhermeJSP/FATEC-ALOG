#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    int Kwh, QtdVerm, QtdAmare;
    char Instal, Faixa;
    float ValPag, TotPagRes, TotPagComer, TotPagInd;

    QtdVerm = 0;
    QtdAmare = 0;
    TotPagRes = 0;
    TotPagComer = 0;
    TotPagInd = 0;


    printf("\nInforme a quantidade de KWh ou [0] para encerrar: ");
    scanf("%i", &Kwh);

    while (Kwh > 0)
    {
    printf("\nInforme o tipo de instalacao:   R - Residencial\n"
           "\t\t\t\tI - Industrial\n"
           "\t\t\t\tC - Comercial\n\n\t\t\t\t");
    scanf(" %c", &Instal);

    printf("\nInforme o tipo de faixa:        A - Amarela\n"
           "\t\t\t\tV - Vermelha\n\t\t\t\t");
    scanf(" %c", &Faixa);

    if (Instal == 'R' || Instal == 'r')
    {
        if (Kwh <= 500)
        {
            ValPag = Kwh * 0.40;
            TotPagRes = TotPagRes + ValPag;
        } else
        if (Kwh > 500)
        {
            ValPag = Kwh * 0.55;
            TotPagRes = TotPagRes + ValPag;
        }
    }else

    if (Instal == 'I' || Instal == 'i')
    {
        if (Kwh <= 1000)
        {
            ValPag = Kwh * 0.60;
            TotPagInd = TotPagInd + ValPag;
        } else
        if (Kwh > 1000)
        {
            ValPag = Kwh *0.70;
            TotPagInd = TotPagInd + ValPag;
        }
    } else

    if (Instal == 'C' || Instal == 'c')
    {
        if (Kwh <= 5000)
        {
            ValPag = Kwh * 0.65;
            TotPagComer = TotPagComer + ValPag;
        } else
        if (Kwh > 5000)
        {
            ValPag = Kwh *0.85;
            TotPagComer = TotPagComer + ValPag;
        }
    }

    if (Faixa == 'V' || Faixa == 'v')
    {
        QtdVerm = QtdVerm + 1;
        ValPag = ValPag * 1.2;
    } else
        {
            QtdAmare = QtdAmare + 1;
        }


    printf("\nValor a ser pago: R$ %.2f\n", ValPag);

    system("pause");
    system("cls");

    printf("\n\nInforme a quantidade de KWh ou [0] para encerrar: ");
    scanf("%i", &Kwh);
    }

    printf("\nValor pago pelas contas Residenciais: R$ %.2f\n", TotPagRes);
    printf("\nValor pago pelas contas Comerciais: R$ %.2f\n", TotPagComer);
    printf("\nValor pago pelas contas Industriais: R$ %.2f\n", TotPagInd);
    printf("\nQuantidade de contas Amarelas: %i\n", QtdAmare);
    printf("\nQuantidade de contas Vermelhas: %i\n\n", QtdVerm);
    system("pause");
    system("cls");
}
