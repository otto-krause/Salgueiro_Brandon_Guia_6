#include <stdio.h>
#include <stdlib.h>

int main()
{
    int II;
    int I;
    printf("Introduzca el numero de un mes \n");
    scanf("%d",&II);
    printf("Introduzca su dia de nacimiento ");
    scanf("%d",&I);
    switch(II)
    {
        case 1:
            if (I<21)
            {
                 printf("Capricornio\n");
            }
            else
             {
               printf("Acuario\n");
             }
        break;
        case 2:
            if (I<20)
            printf("Acuario\n");
            else
            {
            printf("Picis\n");
            }
        break;
        case 3:
            if (I<21)
            printf("Picis\n");
            else
            {
                 printf("Aries\n");
            }
        break;
        case 4:
            if (I<21)
            printf("Aries\n");
            else
            {
                 printf("Tauro\n");
            }
        break;
        case 5:
            if (I<22)
            printf("Tauro\n");
            else
            {
                 printf("Geminis\n");
            }
        break;
        case 6:
            if (I<22)
            printf("Geminis\n");
            else
            {
                 printf("Cancer\n");
            }
        break;
        case 7:
            if (I<24)
            printf("Cancer\n");
            else
            {
                 printf("Leo\n");
            }
        break;
        case 8:
            if (I<24)
            printf("Leo\n");
            else
            {
                 printf("Virgo\n");
            }
        break;
        case 9:
            if (I<24)
            printf("Virgo\n");
            else
            {
                 printf("Libra\n");
            }
        break;
        case 10:
            if (I<24)
            printf("Libra\n");
            else
            {
                 printf("Escorpio\n");
            }
        break;
        case 11:
            if (I<23)
            printf("Escorpio\n");
            else
            {
                 printf("Sagitario\n");
            }
        break;
        case 12:
            if (I<22)
            printf("Sagitario\n");
            else
            {
                 printf("Capricornio\n");
            }
        break;
        default:
        puts(" Error ");
        break;
    }
    system("pause");
    return 0;
}
