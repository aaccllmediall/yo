#include <stdio.h>

char *invcad(char *cadena)
{
    int len = strlen(cadena);
    int m=0, n=len;
    char tem;
    while(n>m)
    {
        tem=cadena[m];
        cadena[m++]=cadena[--n];
        cadena[n]=tem;
    }
    return cadena;
}

void main()
{
    char cadena[80];
    printf("Introduce cadena: ");
    gets(cadena);
    invcad(cadena);
    printf("Resultado: %s\n", cadena);
}

