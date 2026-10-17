#include <stdio.h>

extern void Dobro(void);
extern void Venda(void);
extern void Media(void);
extern void Tabuada(int, int);

void main(void)
{
    int Opcao, Numero, QtdeElem;

    do {
        printf("\n\nDigite:");
        printf("\n\n1 - Dobro do Numero");
        printf("\n2 - Venda do Produto");
        printf("\n3 - Media do Aluno");
        printf("\n4 - Tabuada");
        printf("\n5 - Sair");
        printf("\n\nOpcao => ");
        scanf("%i", &Opcao);
        system("cls");

        if (Opcao == 1)
            Dobro(); //chamada da rotina
        else
            if (Opcao == 2)
                Venda(); //chamada da rotina
            else
                if (Opcao == 3)
                    Media (); //chamada da rotina
            else
                if (Opcao == 4)
            {
                printf("\nDigite o numero: ");
                scanf("%i", &Numero);
                printf("\nDigite a qtde de fatores: ");
                scanf("%i", &QtdeElem);
                Tabuada (Numero, QtdeElem); //chamada da função
            }

        printf("\n\n\n");
        system("pause");
        system("cls");

    } while (Opcao <5);
    return 0;
}
