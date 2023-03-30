#include <stdio.h>

int main()
{
    int nota,i=0,t=0,cont=0,prom;
    do
    {
        printf("Ingrese la nota del alumno o 0 para finalizar:");
        scanf("%d",&nota);
    }while(nota>10 || nota<=0);
    while(nota!=0)
    {
        cont++;
        t=t+nota;
        prom=t/cont;
        printf("Ingrese la nota del alumno o 0 para finalizar:");
        scanf("%d",&nota);
    }
    printf("El promedio es de %d",prom);

    return 0;
}
