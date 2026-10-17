#include <stdio.h>

extern float CalcMedia(float, float);

//Rotina Media
//Rotina sem passagem de parâmetros

void Media(void)
{
  int Codigo;
  float Prv1, Prv2;

  printf("\n\nDigite o codigo do aluno: ");
  scanf("%i", &Codigo);
  while (Codigo > 0)
  {
    printf("Digite a nota da 1a. prova: ");
    scanf("%f", &Prv1);
	printf("Digite a nota da 2a. prova: ");
	scanf("%f", &Prv2);

	printf("\nMedia do aluno: %.1f", CalcMedia(Prv1,Prv2));
    if (CalcMedia(Prv1,Prv2) >= 5)
       printf(" - Aprovado\n");
    else
       printf(" - Reprovado\n");

    printf("\nDigite o codigo do aluno: ");
    scanf("%i", &Codigo);
  }
}


