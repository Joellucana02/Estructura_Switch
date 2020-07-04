#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rr;
    printf("Introduzca el numero de un mes \n");
    scanf("%d",&rr);
    switch(rr)
    {
        case 1:
        puts("Enero tiene 31 dias. ");
        break;
        case 2:
        puts("Febrero tiene 28 dias. ");
        break;
        case 3:
        puts("Marzo tiene 31 dias. ");
        break;
        case 4:
        puts("Abril tiene 30 dias. ");
        break;
        case 5:
        puts("Mayo tiene 31 dias. ");
        break;
        case 6:
        puts("Junio tiene 30 dias. ");
        break;
        case 7:
        puts("Julio tiene 31 dias. ");
        break;
        case 8:
        puts("Agosto tiene 31 dias. ");
        break;
        case 9:
        puts("Septiembre tiene 30 dias. ");
        break;
        case 10:
        puts("Octubre tiene 31 dias. ");
        break;
        case 11:
        puts("Noviembre tiene 30 dias. ");
        break;
        case 12:
        puts("Diciembre tiene 31 dias. ");
        break;
        default:
        puts(" Error ");
        break;
    }
    system("pause");
    return 0;
}
