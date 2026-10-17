#include <stdio.h>
void main (void)
{
    int horario, hora, minuto, segundo, TotSeg;

    printf("Digite o horario (hhmmss):\n");
    scanf ("%i", &horario);

    hora = horario / 10000;
    minuto = (horario % 10000) / 100;
    segundo = (horario % 10000) % 100;
    TotSeg = (hora * 3600)+(minuto * 60)+(segundo);

    printf("\n%i hora", hora);
    printf("\n%i minuto", minuto);
    printf("\n%i segundo", segundo);
    printf("\n%i total de segundos", TotSeg);
}

/*
mod %
div /

142635 [10000
140000  14 div hora
-----
2635 mod [100
2600       26 div minuto
--------
36 mod segundo*/
