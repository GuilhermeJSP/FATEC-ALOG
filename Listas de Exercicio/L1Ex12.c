#include <stdio.h>
void main (void)
{
    int Nasc, Atual, anos, meses, dias, semanas;
    printf("Informe o ano de nascimento e o ano atual:\n");
    scanf("%i %i", &Nasc, &Atual);
    anos = Atual - Nasc;
    meses = anos * 12;
    dias = meses * 30;
    semanas =  dias / 7;
    printf("\nTempo de vida:\n%i Anos\n%i Meses\n%i Dias\n%i Semanas\n", anos, meses, dias, semanas);
}
