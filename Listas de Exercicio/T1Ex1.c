#include <stdio.h>
void main (void)
{
    int CodFunc, Horas, Setor;
    float Sal, ValHora;
    char Cont;

    Cont = 'S';

    while (Cont == 'S' || Cont == 's')
    {
    //Entrada
    system("cls");
    printf("Digite o codigo de quatro digitos do funcionario: ");
    scanf("%i", &CodFunc);

    //Processamento
    // O cod do funcionario de 4 digitos precisa ser separado, o primeiro digito é do setor
    Setor = CodFunc / 1000;

    //Verifica se é um dos tres setores validos
    if (Setor != 1 && Setor != 2 && Setor != 3)
        printf ("\nSetor Invalido\n"); //encerra o cod

    else {

    printf("\nInforme o numero de horas trabalhadas: ");
    scanf("%i", &Horas);

    if (Setor == 1)
        ValHora = 7.00;
    else if (Setor == 2)
        ValHora = 11.00;
    else
        ValHora = 18.00;


    if (Horas > 400)
        {
        Sal = (400 * ValHora) + ((Horas - 400) * (ValHora * 1.1));
        }
    else
        Sal = (Horas * ValHora);


    printf("\nSetor: %i \nValor da Hora: R$ %.2f \nHoras Trabalhadas: %i \nSalario: R$ %.2f\n", Setor, ValHora, Horas, Sal);
    }

    printf("\nDeseja calcular outro funcionario? [S/N]: ");
    scanf(" %c", &Cont);
    }

}
