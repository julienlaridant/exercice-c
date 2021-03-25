#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void majuscule(char *chaine)
{
    int i = 0;
    for (i = 0 ; chaine[i] != '\0' ; i++)
    {
        chaine[i] = toupper(chaine[i]);
    }
}


