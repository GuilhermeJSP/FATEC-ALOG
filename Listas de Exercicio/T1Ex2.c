#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    char Tipo, Composicao, Cont;
    int Qtd;
    float PrecoProd, PrecoFinal, ValVenda;

    Cont = 'S'; //Inicio do laço de repetição
    while (Cont == 'S' || Cont == 's') //condição do laço de repetição
    {
    system ("cls"); //limpa a tela para um novo produto
    printf("Entre com as informacoes abaixo:\n");

    printf("\nTipo do produto:"
           "[A] Areia"
           "\n\t\t[P] Pedrita"
           "\n\t\t[B] Brita"
           "\n\t\t[S] Saibro"
           "\n\n\t\t"); //cursor esperando abaixo do menu
    scanf(" %c", &Tipo);

    if (Tipo != 'A' && Tipo != 'a' &&       //validação de informação digitada corretamente
        Tipo != 'P' && Tipo != 'p' &&
        Tipo != 'B' && Tipo != 'b' &&
        Tipo != 'S' && Tipo != 's')
    {
        printf("\n\t\tTipo Invalido!\n");
        printf("\n\t\tPressione Enter para reiniciar\n");
        getchar(); //pega a quebra de linha
        getchar(); //espera o comando enter
        continue; //reinicia o programa
    }

    printf("\nComposicao:"
           "\t[F] Fina"
           "\n\t\t[M] Media"
           "\n\t\t[G] Grossa"
           "\n\n\t\t");
    scanf(" %c", &Composicao);

    if (Composicao != 'F' && Composicao != 'f' &&
        Composicao != 'M' && Composicao != 'm' &&
        Composicao != 'G' && Composicao != 'g')
    {
        printf("\n\t\tComposicao Invalido!\n");
        printf("\n\t\tPressione Enter para reiniciar\n");
        getchar();
        getchar();
        continue;
    }

    printf("\nQuantidade: "
           "\n\t\t");
    scanf("%i", &Qtd);

    if (Qtd <= 0)
    {
        printf("\n\t\tQuantidade Invalida!\n");
        printf("\n\t\tPressione Enter para reiniciar\n");
        getchar();
        getchar();
        continue;
    }

    //preços por tipo de material
    if (Tipo == 'A' || Tipo == 'a')
    {
        Tipo = 'A';
        PrecoProd = 34;

    } else if (Tipo == 'P' || Tipo == 'p')
    {
        Tipo = 'F';
        PrecoProd = 42;

    } else if (Tipo == 'B' || Tipo == 'b')
    {
        Tipo = 'B';
        PrecoProd = 30;

    } else
    {
        Tipo = 'S';
        PrecoProd = 60;
    }

    //preço por composição
    if (Composicao == 'F' || Composicao == 'f')
        PrecoFinal = PrecoProd;
    else
    if (Composicao == 'M' || Composicao == 'm')
        PrecoFinal = PrecoProd * 1.15;
    else
        PrecoFinal = PrecoProd * 1.25;


    //calculo do preço de venda por m³
        ValVenda = PrecoFinal * Qtd;

    //calculo do frete
        if (ValVenda < 750)
            ValVenda = ValVenda + 45;

    printf("\nPreco do Produto por m3: R$ %.2f",PrecoFinal);
    printf("\nPreco de Venda: R$ %.2f",ValVenda);

    printf("\n\nDeseja continuar? [S/N]\n\t\t");
    scanf(" %c", &Cont);
    }
    //system("pause");
}
