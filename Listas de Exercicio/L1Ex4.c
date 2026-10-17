#include <stdio.h>
void main (void)
{
    float Preco, PrecoNovo;
    printf("Informe o valor do produto: ");
    scanf("%f", &Preco);
    PrecoNovo = Preco * 0.9;
    printf("\nPreco com desconto de 10%%: R$ %.2f\n",PrecoNovo);
    system("pause");
}
