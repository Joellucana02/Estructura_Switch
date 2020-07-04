#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rr;
    int r;
    printf("Introduzca el numero de un dia de la semana \n ");
    scanf("%d",&rr);

    switch(rr)
    {
        case 1:
        puts("Es Lunes. ");
        break;
        case 2:
        puts("Es Martes. ");
        break;
        case 3:
        puts("Es Miercoles. ");
        break;
        case 4:
        puts("Es Jueves. ");
        break;
        case 5:
        puts("Es Viernes. ");
        break;
        case 6:
        puts("Es Sabado. ");
        break;
        case 7:
        puts("Es Domingo. ");
        break;
        default:
        puts(" Error ");
        break;
    }
    system("pause");
    return 0;
}
