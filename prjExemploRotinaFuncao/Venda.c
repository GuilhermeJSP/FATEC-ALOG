#include <stdio.h>

extern float CalcDesconto(float);

//Rotina Venda
//Rotina sem passagem de parametros

void Venda (void)
{
    int Codigo, QtdeVend;
    float PrecUnit, ValComp, ValPagar;

    printf("\nDigite o codigo do produto: ");
    scanf("%i", &Codigo);
    printf("Digite o preco unitario: ");
    scanf("%f", &PrecUnit);
    printf("Digite a quantidade vendida: ");
    scanf("%i", &QtdeVend);
    ValComp = QtdeVend * PrecUnit;
    ValPagar = ValComp - CalcDesconto(ValComp);
    printf("\n\nValor da Compra %.2f", ValComp);
    printf("\nValor do Desconto %.2f", CalcDesconto(ValComp));
    printf("\nValor a Pagar %.2f", ValPagar);
}
