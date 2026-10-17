#include <stdio.h>

//Rotina Tabuada
//Rotina com passagem de parâmetros

void Tabuada(int F, int Q)
{
  int Cont, Resultado;

  for (Cont = 1; Cont <= Q; Cont++)
  {
    Resultado = F * Cont;
    printf("\n%i x %i = %i", F, Cont,  Resultado);
  }
}

