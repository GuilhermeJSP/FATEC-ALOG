#include <stdio.h>

//Rotina Dobro
//Rotina sem passagem de parametros
void Dobro (void)
{
    int Numero, Dobro;

    printf("\nDigite um numero inteiro: ");
    scanf("%i", &Numero);
    Dobro = Numero * 2;
    printf("\n\nO dobro e' %i", Dobro);

}
