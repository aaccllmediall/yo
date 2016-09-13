#include <stdio.h>
#include <stdlib.h>

void maymin(char s[]);

void main()
{
    char cadena[80];
    printf("Introduce cadena: ");
    gets(cadena);
    maymin(cadena);
    printf("En minuscula: %s\n", cadena);
}

void maymin(char s[])
{
    int i=0;
    for (i=0; s[i]!='\0'; ++i)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+'a'-'A';
        }
    }
}


