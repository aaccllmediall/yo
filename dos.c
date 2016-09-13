#include <stdio.h>
#include <stdlib.h>

void strindex(char j[], char h);

void main()
{
    char cad[80];
    char y;
    printf("Coloque cadena: ");
    gets(cad);
    printf("Coloque caracter: ");
    gets(y);
    strindex(cad, y);
}

void strindex(char j[], char h)
{
    int len=strlen(j);
    int i;
    for (i=len; i!=0; --i)
    {
        if (j[i]==h)
        {
            printf("Encontrado: %d", i);
        }
    }
}

