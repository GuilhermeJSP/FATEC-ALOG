#include <stdio.h>
void main (void)
    {
        float Nota1, Nota2, Media;
        printf("Informe a primeira nota: ");
        scanf("%f", &Nota1);
        printf("\nInforme a segunda nota: ");
        scanf("%f", &Nota2);
        Media = (Nota1 + Nota2) / 2;
        printf("\nA media das notas e': %.1f\n", Media);

    }
