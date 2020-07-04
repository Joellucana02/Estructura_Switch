#include <stdio.h>
#include <stdlib.h>

int main()
{
    char rr;
    printf("Introduzca su calificacion \n");
    rr= getchar();
    switch(rr)
    {
        case 'a':
        puts("Su calificacion es: Excelente. ");
        break;
        case 'b':
        puts("Su calificacion es: Buena. ");
        break;
        case 'c':
        puts("Su calificacion es: Regular. ");
        break;
        case 'd':
        puts("Su calificacion es: Suficiente. ");
        break;
        case 'f':
        puts("Su calificacion es: No Suficiente. ");
        break;
        default:
        puts("Error ");
        break;
    }
    system("pause");
    return 0;
}
